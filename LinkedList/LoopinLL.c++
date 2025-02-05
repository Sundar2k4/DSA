class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        ListNode *temp = head;
        unordered_map<ListNode *, int> Nodemap;
        while (temp != nullptr)
        {
            if (Nodemap.find(temp) != Nodemap.end())
            {
                return true;
            }

            Nodemap[temp] = 1;

            temp = temp->next;
        }

        return false;
    }
};