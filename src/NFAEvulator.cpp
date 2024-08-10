#include "NFAEvaluator.hpp"

#include <iostream>

nregex::impl::NFAEvaluator::NFAEvaluator(const std::string& input, State* nfa) 
  : input_{input}, nfas_{{nfa}}
{}

bool nregex::impl::NFAEvaluator::eval(){
  return evaluate(input_, nfas_);
}

bool nregex::impl::NFAEvaluator::evaluate(const std::string& input, const std::set<State*> nfas)
{
  if(input.empty()){
    return hasMatch(evaluateStates(std::nullopt, nfas));
  }
  else 
    return evaluate(input.substr(1), evaluateStates(input[0], nfas));
}

std::set<nregex::impl::State*> nregex::impl::NFAEvaluator::evaluateStates(std::optional<char> input, const std::set<State*>& nfas)
{
  std::unordered_set<State*> visitedStates;
  std::set<State*> result;
  for(auto state: nfas) {
    auto states = evaluateState(input, state, visitedStates);
    result.insert(states.begin(), states.end());
  }
  return result;
}

std::set<nregex::impl::State*> nregex::impl::NFAEvaluator::evaluateState(std::optional<char> input, State* currentState, std::unordered_set<State*>& visitedStates)
{
  if(visitedStates.count(currentState))
    return {};
  else {
    visitedStates.insert(currentState);
    if (auto placeholder = dynamic_cast<Placeholder*>(currentState)) {
      return evaluateState(input, placeholder->pointingTo_, visitedStates);
    } else if (auto consume = dynamic_cast<Consume*>(currentState)) {
      if(consume->c_ == input) 
        return {consume->out_};
      return {};
    } else if (auto split = dynamic_cast<Split*>(currentState)) {
      auto state1 = evaluateState(input, split->out1_, visitedStates);
      auto state2 = evaluateState(input, split->out2_, visitedStates);
      state1.insert(std::begin(state2), std::end(state2));
      return state1;
    } else if (auto match = dynamic_cast<Match*>(currentState)) {
      if (input.has_value())
        return {};
      return {new Match()};
    }
  }
}

bool nregex::impl::NFAEvaluator::hasMatch(const std::set<State*>& states) {
    for (auto state : states) {
        if (dynamic_cast<Match*>(state)) {
            return true;
        }
    }
    return false;
}


