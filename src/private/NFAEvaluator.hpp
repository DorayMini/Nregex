#ifndef __NFAEVALUATOR__
#define __NFAEVALUATOR__

#include <set>
#include <string>
#include <optional>
#include <unordered_set>

#include "states.hpp"

namespace nregex {
  namespace impl{
    class NFAEvaluator{
    public:
      NFAEvaluator(const std::string& input, State* nfa);

      bool eval();
      bool evaluate(const std::string& input, const std::set<State*> nfas);
    private:
      std::set<State*> evaluateState(std::optional<char> input, State* currentState, std::unordered_set<State*>& visitedStates);
      std::set<State*> evaluateStates(std::optional<char> input, const std::set<State*>& nfas);

      bool hasMatch(const std::set<State*>& states);

      std::string input_;
      std::set<State*> nfas_;
    };
  }//namespace impl
}//namespace nregex

#endif // __NFAEVALUATOR__
