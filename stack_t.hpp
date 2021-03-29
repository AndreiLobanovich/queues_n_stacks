template <class stack_t>
class StackT
{
    private:
        stack_t *arr;
        int flag;
    public:
        StackT(int size);
        void push(stack_t);
        stack_t pop();
        int size();
        bool empty();

};