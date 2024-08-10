#include <new>
#include <iostream>
#include "AST.hpp"


//struct Literal
nregex::impl::Literal::Literal(char c_)
  : c(c_)
{}
nregex::impl::Literal& nregex::impl::Literal::operator=(const Literal& lit){
  if(&lit != this)
   c = lit.c;
  return *this;
}

//struct Or
nregex::impl::Or::Or(RegexExpr* left_, RegexExpr* right_)
  : left{left_}, right{right_}
{}
nregex::impl::Or::Or(const Or& objOr)
{
  if (&objOr != this) {
    new (this) Or(objOr);
  }
}

nregex::impl::Or& nregex::impl::Or::operator=(const Or& objOr){
  if(&objOr != this){
    this->~Or(); 
    new (this) Or(objOr);
  }
  return *this;
}

nregex::impl::Or::~Or()
{
  delete left;
  delete right;
}

//struct Concat
nregex::impl::Concat::Concat(RegexExpr* first_, RegexExpr* second_)
  : first{first_}, second{second_}
{}
nregex::impl::Concat::Concat(const Concat& concat)
  : first{concat.first}, second{concat.second}
{}

nregex::impl::Concat& nregex::impl::Concat::operator=(const Concat& concat){
  if(&concat != this){
    this->~Concat();
    new (this) Concat(concat);
  }
  return *this;
}

nregex::impl::Concat::~Concat()
{
  delete first;
  delete second;
}

//struct Repeat
nregex::impl::Repeat::Repeat(RegexExpr* expr_)
  : expr{expr_}
{}
nregex::impl::Repeat::Repeat(const Repeat& rep)
  : expr{rep.expr}
{}

nregex::impl::Repeat& nregex::impl::Repeat::operator=(const Repeat& rep){
  if(&rep != this){
    this->~Repeat();
    new (this) Repeat(rep);
  }
  return *this;
}

nregex::impl::Repeat::~Repeat() {delete expr;}

//struct Plus
nregex::impl::Plus::Plus(RegexExpr* expr_)
  : expr{expr_}
{}
nregex::impl::Plus::Plus(const Plus& plus)
  : expr{plus.expr}
{}

nregex::impl::Plus& nregex::impl::Plus::operator=(const Plus& plus) {
  if(&plus != this){
    this->~Plus();
    new (this) Plus(plus);
  }
  return *this;
}

nregex::impl::Plus::~Plus() {delete expr;}
