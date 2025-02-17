void MyQueue::push(int x)
{
    QueueNode *temp = new QueueNode(x);
    if (rear == nullptr)
    {
        front = rear = temp;
        return;
    }

    rear->next = temp;
    rear = temp;
}

// Function to pop front element from the queue.
int MyQueue ::pop()
{
    if (front == nullptr)
    {
        return -1;
    }

    QueueNode *temp = front;
    int val = front->data;
    front = front->next;
    if (front == nullptr)
    {
        rear = nullptr;
    }
    delete temp;
    return val;
}