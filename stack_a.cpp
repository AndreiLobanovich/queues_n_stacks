#include "stack_a.hpp"

StackA::StackA()
{
    flag = 0;
}

void StackA::push(int x)
{
    if(flag < 100)
    {
        arr[flag] = x;
        flag++;
    }
}

bool StackA::empty()
{
    if(flag == 0)
        return true;
    else
        return false;
}

int StackA::size()
{
    return flag;
}

int StackA::pop()
{
    if(flag > 0)
    {
        int tmp = arr[flag - 1];
        arr[flag - 1] = 0;
        flag--;
        return tmp;
    }
    else
        return 0;
}