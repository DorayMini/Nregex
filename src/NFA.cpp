#include "NFA.hpp"

nregex::impl::NFA::NFA(RegexExpr* regex) : regex_(regex), nfa_{RegexToNFA(regex_, new Match())}
{}

nregex::impl::State* nregex::impl::NFA::RegexToNFA(RegexExpr* regex, State* andThen){
  const std::type_info& regex_type = typeid(*regex);
  if(typeid(Literal) == regex_type)
  {
    char literalExpr = dynamic_cast<Literal*>(regex)->c;
    return new Consume(literalExpr, andThen);
  }
  else if (typeid(Concat) == regex_type)
  {
    Concat* concat = dynamic_cast<Concat*>(regex);
    return RegexToNFA(concat->first, RegexToNFA(concat->second, andThen));
  }
  else if(typeid(Or) == regex_type)
  {
    Or* or_ = dynamic_cast<Or*>(regex);
    return new Split(RegexToNFA(or_->left, andThen), RegexToNFA(or_->right, andThen));
  }
  else if(typeid(Repeat) == regex_type)
  {
    RegexExpr* repeatExpr = dynamic_cast<Repeat*>(regex)->expr;
    auto placeholder = new Placeholder(nullptr);
    auto split = new Split(RegexToNFA(repeatExpr, placeholder), andThen);
    placeholder->pointingTo_ = split;
    return placeholder;
  }
  else if(typeid(Plus) == regex_type)
  {
    RegexExpr* plusExpr = dynamic_cast<Plus*>(regex)->expr;
    return RegexToNFA(new Concat(plusExpr, new Repeat(plusExpr)), andThen);
  }
}

nregex::impl::State* nregex::impl::NFA::get() {return nfa_;}
