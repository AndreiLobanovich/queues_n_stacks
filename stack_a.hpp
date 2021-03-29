class StackA
{
    private:
        int arr[100];
        int flag;
    public:
        StackA();
        void push(int x);
        int pop();
        int size();
        bool empty();

};