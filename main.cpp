#include <iostream>
// #include "stack_a.hpp"
// #include "stack_l.hpp"
// #include "queue_a.hpp"
// #include "queue_l.hpp"
#include "stack_t.hpp"
#include <string.h>
using namespace std;

int main()
{
    StackT<bool> st(2);
    st.push(false);
    cout << st.pop();

    // StackL * stack = new StackL();
    // for(int i = 0; i < 10; i++)
    // {
    //     stack->push(i);
    // }
    // cout << stack->pop();
    // cout << stack->pop();
    // QueueL *queue = new QueueL(152);
    // for (int i = 0; i < 5; i++)
    // {
    //     queue->push(i);
    // }
    // cout << queue->pop();
    // cout << queue->pop();
    // cout << queue->pop();
}