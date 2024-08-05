#ifndef __REGEX__
#define __REGEX__
  #include <vector>
  #include <string>
  #include "AST.hpp"
  #include "parser.hpp"

  namespace nregex {
    class regex {
    public:
      regex(const std::string& reg);
      regex(std::string&& reg);
      regex(const regex &) = delete;
      auto operator=(regex &&) -> regex& = delete;
      auto operator=(const regex &) -> regex& = delete;
    private:
      impl::ParserAST pars;
      impl::RegexAST* ptr;
    };
  }//namespace nregex
#endif // !__REGEX__

