#include "parser.hpp"
#include <iostream>
nregex::impl::RegexParser::RegexParser(const std::string& RegExpr)
  : regExpr(RegExpr)
{
}

auto nregex::impl::RegexParser::parseParentheses() -> RegexExpr*{
  if (this->pos < regExpr.size()) {
    if (regExpr.at(this->pos) == SPECIAL_CHARS::L_PAR) {
      if(leftNode == nullptr || regExpr.at(this->pos-1) == SPECIAL_CHARS::OR){
        pos++;
        return parsing();
      }
      pos++;
      return new Concat(leftNode, parsing());
    } else if (regExpr.at(this->pos) == SPECIAL_CHARS::R_PAR) {
      pos++;
      return parsing();
    } else {
      switch (regExpr.at(this->pos)) {
        case SPECIAL_CHARS::PLUS:
          pos++;
          return new Plus(leftNode);
        case SPECIAL_CHARS::REPEAT:
          pos++;
          return new Repeat(leftNode);
        case SPECIAL_CHARS::OR:
          pos++;
          return new Or(leftNode, parsing());
        default:
          RegexExpr* lit = new Literal(regExpr.at(this->pos));
          char BackChar = regExpr.at(this->pos-1);
          if(leftNode == nullptr || BackChar == SPECIAL_CHARS::OR || BackChar == SPECIAL_CHARS::L_PAR){
            pos++;
            return lit;
          }
          pos++;
          return new Concat(leftNode, lit);
      }
    }
  }
  return leftNode;
}

auto nregex::impl::RegexParser::parsing() -> RegexExpr*{
  if(this->pos < regExpr.size()){
    leftNode = parseParentheses();
    if(this->pos < regExpr.size()) {
      rightNode = parseParentheses();
      leftNode = rightNode;
    }
  }
  return leftNode;
}
