class Solution
{
public:
    // Function to delete a node at given position.
    Node *deleteNode(Node *head, int x)
    {
        if (head == NULL)
        {
            return nullptr; // Empty list case
        }

        Node *temp = head;
        Node *old = nullptr;

        // Traverse to the node at position x
        for (int i = 1; i < x; i++)
        { // Start from 1 since you want to reach xth node
            old = temp;
            temp = temp->next;
            if (temp == NULL)
            {
                return head; // If x is out of bounds, return the original head
            }
        }

        // If we're deleting the head node
        if (temp == head)
        {
            head = temp->next;
            if (head)
            {
                head->prev = NULL; // Update head's prev pointer to NULL
            }
        }
        else
        {
            // Update links to remove the node at position x
            old->next = temp->next;
            if (temp->next)
            {
                temp->next->prev = old;
            }
        }

        // Delete the node
        delete temp;

        return head;
    }
};
