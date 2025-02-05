class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *temp = head;
        unordered_map<ListNode *, int> nmap;
        while (temp != NULL)
        {
            if (nmap.count(temp) != 0)
            {
                return temp;
            }
            nmap[temp] = 1;
            temp = temp->next;
        }
        return nullptr;
    }
};