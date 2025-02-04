class Solution
{
public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data)
    {
        if (head == NULL)
        {
            return nullptr; // Handle empty list case
        }
        Node *temp = head;
        for (int i = 0; i < pos; i++)
        {
            temp = temp->next;
        }
        Node *insertnode = new Node(data);
        insertnode->prev = temp;
        insertnode->next = temp->next;
        if (temp->next != nullptr)
        { // Check to avoid segmentation fault
            temp->next->prev = insertnode;
        }
        temp->next = insertnode;

        return head;
    }
};