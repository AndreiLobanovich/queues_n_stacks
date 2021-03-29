#include "node.hpp"

class QueueL
{
    private:
        ListOfNumbers *stack;

    public:
        QueueL(int x);
        void push(int x);
        int pop();
        int size();
        bool empty();

};