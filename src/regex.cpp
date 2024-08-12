#include "regex.hpp"
#include <iostream>


nregex::regex::regex(const std::string& pattern)
  : pattern_{pattern}
{}

nregex::regex::regex(const std::string&& pattern) noexcept
  : pattern_{pattern}
{}

bool nregex::regex::match(const std::string& input, Parameters param)
{
  impl::RegexParser* reg;
  if(param == FULL)
    reg = new impl::RegexParser(pattern_);
  else {
    std::string newPattern = ".*";
    reg = new impl::RegexParser(newPattern.append(pattern_).append(".*"));
  }
  impl::NFA* nfa = new impl::NFA(reg->parsing());
  impl::NFAEvaluator* nfaEval = new impl::NFAEvaluator(input, nfa->get());
  return nfaEval->eval();
}
