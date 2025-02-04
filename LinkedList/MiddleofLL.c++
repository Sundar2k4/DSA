class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *sptr = head;
        ListNode *fptr = head;
        while (fptr != nullptr && fptr->next != nullptr)
        {
            sptr = sptr->next;
            fptr = fptr->next->next;
        }

        return sptr;
    }
};