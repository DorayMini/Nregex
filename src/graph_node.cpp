#include "graph_node.hpp"

nregex::impl::graph_node::graph_node(const char &Character,
    graph_node* Transition, graph_node* Epsilon_transition)
  : epsilon_transition(Epsilon_transition)
    transition(Transition),
    character(Character)
{
}

nregex::impl::graph_node::graph_node(const graph_node node)
  : graph_node{node.character,
               node.transition,
               node.epsilon_transition}

{
}

nregex::impl::graph_node::graph_node(const graph_node& node)
  : graph_node{node.character,
    node.transition,
    node.epsilon_transition}
{
}

nregex::impl::graph_node::graph_node(graph_node&& moved){
  character = moved.character;
  transition = moved.transition;
  epsilon_transition = moved.epsilon_transition;
  node.character = nullptr;
  moved.transition = nullptr;
  moved.epsilon_transition = nullptr;
}
