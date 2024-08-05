#ifndef __PARSERS__
#define __PARSERS__
  #include <string>
  #include "AST.hpp"

  namespace nregex {
    namespace impl{
      enum SPECIAL_CHARS{
        L_PAR = '(',
        R_PAR = ')',
        PLUS = '+',
        REPEAT = '*',
        OR = '|',
      };
      class Parsers{};

      class ParserAST: public Parsers{
      public:
        ParserAST(const std::string& RegExpr);
        auto parsing() -> RegexAST*;
      private:
        std::string regExpr;
        RegexAST* leftNode;
        RegexAST* rightNode;
        int pos = 0;

        auto parseParentheses() -> RegexAST*;
      };
    }//namespace impl
  }//,namespace nregex
#endif // !__PARSERS__
