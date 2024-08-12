#ifndef __StateS__
#define __StateS__

#include <iostream>
namespace nregex {
  namespace impl {
    struct State{
      virtual ~State(){};
    };

    struct Consume: State{
      Consume(char c_, State* out_);
      ~Consume(){delete out;}

      char c;
      State* out;
    };

    struct Split: State{
      Split(State* out1_, State* out2_);
      ~Split(){
        delete out1;
        delete out2;
      }

      State* out1;
      State* out2;
    };

    struct Match: State{
      Match(){}
    };

    struct Placeholder: State{
      Placeholder(State* pointingTo_);
      ~Placeholder(){delete pointingTo;}

      State* pointingTo;
    };
  }//namespace impl
}//namespace nregex

#endif // !__StateS__
#define __StateS__

