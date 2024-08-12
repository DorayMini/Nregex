#ifndef __REGEX__
#define __REGEX__

#include <vector>
#include <string>

#include "AST.hpp"
#include "NFA.hpp"
#include "parser.hpp"
#include "NFAEvaluator.hpp"


namespace nregex {
  enum Parameters{
    FULL,
    ANYWHERE
  };
  class regex {
  public:
    regex(const std::string& pattern);
    regex(const std::string&& pattern) noexcept;
    regex(const regex &) = delete;
    auto operator=(regex &&) -> regex& = delete;
    auto operator=(const regex &) -> regex& = delete;

    bool match(const std::string& input, Parameters param);
  private:
    const std::string pattern_;
  };
}//namespace nregex
#endif // !__REGEX__

