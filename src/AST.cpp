#include <new>
#include <iostream>
#include "AST.hpp"

//class Literal
nregex::impl::Literal::Literal(char C)
  : c(C)
{}
auto nregex::impl::Literal::getLiteral() const -> char{return c;}
auto nregex::impl::Literal::operator=(const Literal& lit) -> Literal&{
  if(&lit != this)
   c = lit.getLiteral();
  return *this;
}

auto nregex::impl::Literal::print() const -> void{
  std::cout << "Literal(" << c << ')';
}

//class Or
nregex::impl::Or::Or(RegexAST* Expr1, RegexAST* Expr2)
  : expr1(Expr1), expr2(Expr2)
{}
nregex::impl::Or::Or(const Or& objOr)
{
  if (&objOr != this) {
    new (this) Or(objOr);
  }
}
nregex::impl::Or::~Or(){
  delete expr1;
  delete expr2;
}

auto nregex::impl::Or::getExpr1() const -> RegexAST*{return expr1;}
auto nregex::impl::Or::getExpr2() const -> RegexAST*{return expr2;}

auto nregex::impl::Or::operator=(const Or& objOr) -> Or&{
  if(&objOr != this){
    this->~Or(); 
    new (this) Or(objOr);
  }
  return *this;
}

auto nregex::impl::Or::print() const -> void{
  std::cout << " Or(";
  if (expr1 != nullptr){
    std::cout << " expr1: ";
    expr1->print();
  }
  else std::cout << " expr1: nullptr ";
  if(expr2 != nullptr){
    std::cout << " expr2: ";
    expr2->print();
  }
  else std::cout << " expr2: nullptr ";
  std::cout << ')';
}

//class Concat
nregex::impl::Concat::Concat(RegexAST* First, RegexAST* Second)
  : first(First), second(Second)
{}
nregex::impl::Concat::Concat(const Concat& concat)
  : first(concat.getFirst()), second(concat.getSecond())
{}
nregex::impl::Concat::~Concat(){
  delete first;
  delete second;
}

auto nregex::impl::Concat::getFirst() const -> RegexAST*{return first;}
auto nregex::impl::Concat::getSecond() const -> RegexAST*{return second;}
auto nregex::impl::Concat::operator=(const Concat& concat) -> Concat&{
  if(&concat != this){
    this->~Concat();
    new (this) Concat(concat);
  }
  return *this;
}
auto nregex::impl::Concat::print() const -> void{
  std::cout << " Concat(";
  if (first != nullptr){
    std::cout << " first: ";
    first->print();
  }
  else std::cout << " first: nullptr ";
  if(second != nullptr){
    std::cout << " second: ";
    second->print();
  }
  else std::cout << " second: nullptr ";
  std::cout << ')';
}

//class Repeat
nregex::impl::Repeat::Repeat(RegexAST* Expr)
  : expr(Expr)
{}
nregex::impl::Repeat::Repeat(const Repeat& rep)
  : expr(rep.getExpr())
{}
nregex::impl::Repeat::~Repeat(){
  delete expr;
}
auto nregex::impl::Repeat::getExpr() const -> RegexAST*{return expr;}
auto nregex::impl::Repeat::operator=(const Repeat& rep) -> Repeat&{
  if(&rep != this){
    this->~Repeat();
    new (this) Repeat(rep);
  }
  return *this;
}
auto nregex::impl::Repeat::print() const -> void{
  std::cout << " Repeat(";
  if (expr != nullptr){
    std::cout << " expr: ";
    expr->print();
  }
  else std::cout << " expr: nullptr ";
  std::cout << ')';
}
//class Plus
nregex::impl::Plus::Plus(RegexAST* Expr)
  : expr(Expr)
{}
nregex::impl::Plus::Plus(const Plus& plus)
  : expr(plus.getExpr())
{}
nregex::impl::Plus::~Plus(){
  delete expr;
}

auto nregex::impl::Plus::getExpr() const -> RegexAST*{return expr;}
auto nregex::impl::Plus::operator=(const Plus& plus) -> Plus&{
  if(&plus != this){
    this->~Plus();
    new (this) Plus(plus);
  }
  return *this;
}
auto nregex::impl::Plus::print() const -> void{
  std::cout << " Plus(";
  if (expr != nullptr){
    std::cout << " expr: ";
    expr->print();
  }
  else std::cout << " expr: nullptr ";
  std::cout << ')';
}
