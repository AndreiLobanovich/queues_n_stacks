#include "stack_t.hpp"

template <class stack_t>
StackT<stack_t>::StackT(int size)
{
    flag = 0;
    arr = new stack_t[size];
}

template <class stack_t>
void StackT<stack_t>::push(stack_t el)
{
    if(flag < 100)
    {
        arr[flag] = el;
        flag++;
    }
}

template <class stack_t>
bool StackT<stack_t>::empty()
{
    if(flag == 0)
        return true;
    else
        return false;
}

template <class stack_t>
int StackT<stack_t>::size()
{
    return flag;
}

template <class stack_t>
stack_t StackT<stack_t>::pop()
{
    if(flag > 0)
    {
        stack_t tmp = arr[flag - 1];
        flag--;
        return tmp;
    }
    else
        return 0;
}