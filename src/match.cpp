#include "match.hpp"
#include "private/match_begin.hpp"
#include "private/match_here.hpp"

auto nregex::match(char* text, char* regexp) -> bool{
  if (regexp[0] == '^') {
    return match_begin(text, ++regexp);
  } else {
    do {
      if (match_here(text, regexp))
        return 1;
    } while(*regexp++ != '\0');
  }
  return 0;
}
