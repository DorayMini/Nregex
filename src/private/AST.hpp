#ifndef __AST__
#define __AST__
  namespace nregex{
    namespace impl {
      class RegexAST{
      public:
        virtual auto print() const -> void = 0;
      };

      class Literal: public RegexAST{
      public:
        Literal() = delete;
        Literal(char C);
        auto operator=(const Literal& lit) -> Literal&;

        auto getLiteral() const -> char;
        auto print() const -> void final;
      private:
        char c;
      };

      class Or: public RegexAST{
      public:
        Or() = delete;
        Or(const Or& objOr);
        Or(RegexAST* Expr1, RegexAST* Expr2);
        ~Or();
        auto operator=(const Or& objOr) -> Or&;

        auto getExpr1() const -> RegexAST*;
        auto getExpr2() const -> RegexAST*;
        auto print() const -> void final;
      private:
        RegexAST* expr1;
        RegexAST* expr2;
      };

      class Concat: public RegexAST{
      public:
        Concat() = delete;
        Concat(const Concat& concat);
        Concat(RegexAST* First, RegexAST* Second);
        ~Concat();
        auto operator=(const Concat& concat) -> Concat&;

        auto getFirst() const -> RegexAST*;
        auto getSecond() const -> RegexAST*;
        auto print() const -> void final;
      private:
        RegexAST* first;
        RegexAST* second;
      };

      class Repeat: public RegexAST{
      public:
        Repeat() = delete;
        Repeat(const Repeat& rep);
        Repeat(RegexAST* Expr);
        ~Repeat();
        auto operator=(const Repeat& rep) -> Repeat&;

        auto getExpr() const -> RegexAST*;
        auto print() const -> void final;
      private:
        RegexAST* expr;
      };

      class Plus: public RegexAST{
      public:
        Plus() = delete;
        Plus(const Plus& plus);
        Plus(RegexAST* Expr);
        ~Plus();
        auto operator=(const Plus& plus) -> Plus&;

        auto getExpr() const -> RegexAST*;
        auto print() const -> void final;
      private:
        RegexAST* expr;
      };
    }//namespace impl
  }//namespace nregex

#endif // !__AST__
