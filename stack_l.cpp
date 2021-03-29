#include "stack_l.hpp"
StackL::StackL()
{
    stack = new ListOfNumbers();
}

void StackL::push(int x)
{
    stack->Add(x);
}

int StackL::pop()
{
    return stack->pop();
}

int StackL::size()
{
    return stack->size();
}

bool StackL::empty()
{
    return stack->empty();
}