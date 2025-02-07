class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        unordered_map<ListNode *, int> um;
        ListNode *temp = headA;

        while (temp)
        {
            um[temp] = 1;
            temp = temp->next;
        }
        temp = headB;
        while (temp)
        {
            if (um.find(temp) != um.end())
            {
                return temp;
            }
            temp = temp->next;
        }

        return nullptr;
    }
};
