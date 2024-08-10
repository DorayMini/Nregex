#ifndef __StateS__
#define __StateS__

#include <iostream>
namespace nregex {
  namespace impl {
    struct State{
      virtual ~State(){};
      virtual void print() const = 0;
    };

    struct Consume: State{
      Consume(const char& c, State* out): c_{c}, out_{out}{}
      ~Consume(){delete out_;}

      void print() const
      {
        std::cout << "consume(c_: ";
        if(c_ == NULL) std::cout << "null";
        else std::cout << c_;
        std::cout << " out_: ";
        if(out_ == nullptr) std::cout << "nullptr";
        else out_->print();
        std::cout << ')';
      }

      char c_;
      State* out_;
    };

    struct Split: State{
      Split(State* out1, State* out2): out1_{out1}, out2_{out2}{}
      ~Split(){
        delete out1_;
        delete out2_;
      }

      void print() const
      {
        std::cout << "split(out1_: ";
        if(out1_ == nullptr) std::cout << "nullptr";
        else out1_->print();
        std::cout << " out2_: ";
        if(out2_ == nullptr) std::cout << "nullptr";
        else out2_->print();
        std::cout << ')';
      }

      State* out1_;
      State* out2_;
    };

    struct Match: State{
      Match(){}

      void print() const
      {
        std::cout << "match";
      }
    };

    struct Placeholder: State{
      Placeholder(State* pointingTo): pointingTo_{pointingTo}{}
      ~Placeholder(){delete pointingTo_;}

      void print() const
      {
        std::cout << "placeholder( pointingTo_: ";
        if(pointingTo_ == nullptr) std::cout << "nullptr";
        else pointingTo_->print();
        std::cout << ')';
      }

      State* pointingTo_;
    };
  }//namespace impl
}//namespace nregex

#endif // !__StateS__
#define __StateS__

