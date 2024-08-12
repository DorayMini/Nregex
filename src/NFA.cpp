#include "NFA.hpp"

nregex::impl::NFA::NFA(RegexExpr* regex) : regex_(regex), nfa_{RegexToNFA(regex_, new Match())}
{}

nregex::impl::State* nregex::impl::NFA::RegexToNFA(RegexExpr* regex, State* andThen){
  if(auto literal = dynamic_cast<Literal*>(regex))
  {
    return new Consume(literal->c, andThen);
  }
  else if (auto concat = dynamic_cast<Concat*>(regex))
  {
    return RegexToNFA(concat->first, RegexToNFA(concat->second, andThen));
  }
  else if(auto or_ = dynamic_cast<Or*>(regex))
  {
    return new Split(RegexToNFA(or_->left, andThen), RegexToNFA(or_->right, andThen));
  }
  else if(auto repeat = dynamic_cast<Repeat*>(regex))
  {
    auto placeholder = new Placeholder(nullptr);
    auto split = new Split(RegexToNFA(repeat->expr, placeholder), andThen);
    placeholder->pointingTo = split;
    return placeholder;
  }
  else if(auto plus = dynamic_cast<Plus*>(regex))
  {
    return RegexToNFA(new Concat(plus->expr, new Repeat(plus->expr)), andThen);
  } 
}

nregex::impl::State* nregex::impl::NFA::get() {return nfa_;}
