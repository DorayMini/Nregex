#ifndef __REGEX__
#define __REGEX__
  #include <vector>
  #include <string>
  #include "directed_graph.hpp"

  namespace nregex {
    class regex {
    public:
      regex(const std::string& regexp);
      regex(const std::string&& regexp);
      regex(const regex &) = delete;
      auto &operator=(regex &&) -> regex = delete;
      auto &operator=(const regex &) -> regex = delete;
    private:
      const char* metachars = ".*()";
      std::vector<impl::graph_node> regexp;
      
      auto creatingNodes(const std::string regexp) -> void;
      auto addingTransitions() -> void;
      auto addingEpsilonTransitions() -> void;
      auto isMetachar(char character) -> bool;
    };
  }//namespace nregex
#endif // !__REGEX__

