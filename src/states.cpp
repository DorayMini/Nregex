#include "states.hpp"

nregex::impl::Consume::Consume(char c_, State* out_) : c{c_}, out{out_}
{}

nregex::impl::Split::Split(State* out1_, State* out2_) : out1{out1_}, out2{out2_}
{}

nregex::impl::Placeholder::Placeholder(State* pointingTo_) : pointingTo{pointingTo_}
{}
