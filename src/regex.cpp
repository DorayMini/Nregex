#include <iostream>
#include "regex.hpp"

nregex::regex::regex(const std::string& reg)
  : pars(reg)
{
  ptr = pars.parsing();
  ptr->print();
}

nregex::regex::regex(std::string&& reg)
  : pars(reg)
{
  ptr = pars.parsing();
  ptr->print();
}
