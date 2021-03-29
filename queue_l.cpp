#include "queue_l.hpp"

QueueL::QueueL(int x)
{
    stack = new ListOfNumbers(x);
}
 

void QueueL::push(int x)
{
   stack->Add(x);
}
int QueueL::pop()
{
    int tmp = stack->get_value();
    stack = stack->pop_front();
    return tmp;
}
int QueueL::size()
{
    return stack->size();
}
bool QueueL::empty()
{
    return stack->empty();
}
