class Solution
{
public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head)
    {
        Node *temp = head;
        unordered_map<Node *, int> umap;
        while (temp != NULL)
        {
            if (umap.count(temp) != 0)
            {
                Node *loopnode = temp;
                int count = 1;
                temp = temp->next;
                while (temp != loopnode)
                {
                    count++;
                    temp = temp->next;
                }

                return count;
            }
            umap[temp] = 1;
            temp = temp->next;
        }

        return 0;
    }
};