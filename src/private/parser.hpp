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

      class RegexParser{
      public:
        RegexParser(const std::string& RegExpr);
        ~RegexParser();
        auto parsing() -> RegexExpr*;
      private:
        std::string regExpr;
        RegexExpr* leftNode;
        RegexExpr* rightNode;
        int pos = 0;

        RegexExpr* parseParentheses();
        void addParentheses();
      };
    }//namespace impl
  }//,namespace nregex
#endif // !__PARSERS__
