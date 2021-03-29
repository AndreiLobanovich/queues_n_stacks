#include "queue_a.hpp"

QueueA::QueueA()
{
    flag = 0;
}

void QueueA::push(int x)
{
    if(flag<100)
    {
        arr[flag] = x;
        flag++;
    }
}

bool QueueA::empty()
{
    if(flag == 0)
        return true;
    else
        return false;
}

int QueueA::size()
{
    return flag;
}

int QueueA::pop()
{
    if(flag > 0)
    {
        int tmp = arr[0];
        for(int i=0;i<flag;i++)
        {
            arr[i] = arr[i+1];
        }
        flag--;
        return tmp;
    }
    else
        return 0;
}