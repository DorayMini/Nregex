#include "regex.hpp"

auto nregex::regex::creatingNodes(const std::string regexp) -> void{
  const char* regexp_ptr = regexp.c_str();
  impl::graph_node edge{'(', nullptr, nullptr};
  while (*regexp != '\0') {
    this->regexp.push_back(edge);
    edge.symbol = *regexp++;
  }
  edge.character = ')';
  this->regexp.push_back(edge);
  edge.character = '\0';
  this->regexp.push_back(edge);
}

auto nregex::regex::addingTransitions() -> void{
  for (size_t i = 0; i < regexp.size(); i++) {
    auto regexp_iter{regexp.begin()};
    if (!isMetachar(regexp_iter->character)) {
      regexp_iter->transition = (++regexp_iter);
    }
  }
}

auto nregex::regex::addingEpsilonTransition() -> void{

}

auto isMetachar(char character) -> bool{
  char* metachar_ptr = metasymbol;
  while (*metachar_ptr != '\0'){
    if(*metachar_ptr == symbol) return true;
    metachar_ptr++;
  }
  return false;
}

nregex::regex::regex(const std::string& regexp){
  create_graph(regexp);

}

nregex::regex::regex(const std::string& regexp){

}
