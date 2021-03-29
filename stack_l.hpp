#ifndef STACK_L_HPP
#define STACK_L_HPP
#include "node.hpp"


class StackL
{
    private:
        ListOfNumbers *stack;
    public:
        StackL();
        void push(int x);
        int pop();
        int size();
        bool empty();

};
#endif