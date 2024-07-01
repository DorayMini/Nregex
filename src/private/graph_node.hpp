#ifndef __GRAPH__
#define __GRAPH__
  namespace nregex {
    namespace impl {
      struct graph_node{
        char character;
        graph_node* transition;
        graph_node* epsilon_transition;
        
        graph_node(char character, graph_node* transition, 
                          graph_node* epsilon_transition)
        graph_node(const graph_node node);
        graph_node(const graph_node& node);
        graph_node(graph_node&& node);
      };
    }//namespace impl
  } //namespace rege
#endif // !__GRAPH__
