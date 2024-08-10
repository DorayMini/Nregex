#ifndef __REGEX__
#define __REGEX__

#include <vector>
#include <string>

#include "AST.hpp"
#include "NFA.hpp"
#include "parser.hpp"
#include "NFAEvaluator.hpp"

namespace nregex {
  class regex {
  public:
    regex(const std::string& reg, const std::string& input);
    regex(std::string&& reg, std::string&& input);
    regex(const regex &) = delete;
    auto operator=(regex &&) -> regex& = delete;
    auto operator=(const regex &) -> regex& = delete;
  };
}//namespace nregex
#endif // !__REGEX__

