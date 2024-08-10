#ifndef __NFA__
#define __NFA__

#include<typeinfo>

#include "AST.hpp"
#include "states.hpp"

namespace nregex {
  namespace impl {
      class NFA{
      public:
        NFA(RegexExpr* regex);
        State* get();
      private:
        State* RegexToNFA(RegexExpr* regex, State* andThen);

        RegexExpr* regex_;
        State* nfa_;
      };
  } //namespace impl
} //namespace nregex
#endif // !__NFA__
