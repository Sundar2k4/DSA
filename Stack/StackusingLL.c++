class MyStack
{
private:
    StackNode *top;

public:
    MyStack()
    {
        top = nullptr;
    }

    void push(int x)
    {
        StackNode *temp = new StackNode(x);
        temp->next = top;
        top = temp;
    }

    int pop()
    {
        if (top == nullptr)
        {
            std::cout << "Stack Underflow\n";
            return -1;
        }

        StackNode *temp = top;
        int poppedValue = temp->data;

        top = top->next;
        delete temp;

        return poppedValue;
    }
}