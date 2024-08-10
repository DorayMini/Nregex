#ifndef __AST__
#define __AST__

#include <ostream>
#include <memory>


namespace nregex{
  namespace impl {
    struct RegexExpr{
      virtual ~RegexExpr() {}
    };

    struct Literal: RegexExpr{
      Literal() = delete;
      Literal(char c_);
      Literal& operator=(const Literal& lit);

      char c;
    };

    struct Or: RegexExpr{
      Or() = delete;
      Or(const Or& objOr);
      Or(RegexExpr* left_, RegexExpr* right);
      Or& operator=(const Or& objOr);
      ~Or();

      RegexExpr* left;
      RegexExpr* right;
    };

    struct Concat: RegexExpr{
      Concat() = delete;
      Concat(const Concat& concat);
      Concat(RegexExpr* first_, RegexExpr* second_);
      Concat& operator=(const Concat& concat);
      ~Concat();

      RegexExpr* first;
      RegexExpr* second;
    };

    struct Repeat: RegexExpr{
      Repeat() = delete;
      Repeat(const Repeat& rep);
      Repeat(RegexExpr* expr_);
      Repeat& operator=(const Repeat& rep);
      ~Repeat();

      RegexExpr* expr;
    };

    struct Plus: RegexExpr{
      Plus() = delete;
      Plus(const Plus& plus);
      Plus(RegexExpr* expr_);
      Plus& operator=(const Plus& plus);
      ~Plus();
      
      RegexExpr* expr;
    };

  }//namespace impl
}//namespace nregex

#endif // !__AST__
