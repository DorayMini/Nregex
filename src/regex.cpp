#include "regex.hpp"
#include <iostream>


nregex::regex::regex(const std::string& reg, const std::string& input)
{
  impl::NFAEvaluator nfa(input, (new impl::NFA((new impl::RegexParser(reg))->parsing()))->get());
  if(nfa.eval())
    std::cout << "true\n";
  else std::cout << "false\n";

}

nregex::regex::regex(std::string&& reg, std::string&& input)
{
  impl::NFAEvaluator nfa(input, (new impl::NFA((new impl::RegexParser(reg))->parsing()))->get());
  if(nfa.eval())
    std::cout << "true\n";
  else std::cout << "false\n";
}
