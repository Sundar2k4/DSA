class Solution
{
public:
    // Function to reverse a doubly linked list
    DLLNode *reverseDLL(DLLNode *head)
    {
        if (head == NULL)
        {
            return nullptr;
        }

        // Base case: If we reach the last node, return it as the new head
        if (head->next == NULL)
        {
            return head;
        }

        // Recursively reverse the rest of the list
        DLLNode *newHead = reverseDLL(head->next);

        // Reverse the pointers for the current node
        head->next->next = head; // Make the next node's next pointer point to the current node
        head->prev = head->next; // Make the current node's prev pointer point to the next node
        head->next = NULL;       // Set the current node's next pointer to NULL, since it will be the last node

        // Return the new head after recursion
        return newHead;
    }
};
