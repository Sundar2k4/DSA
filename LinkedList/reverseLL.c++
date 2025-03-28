class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {

        ListNode *curr = head;
        ListNode *prev = nullptr;

        while (curr != NULL)
        {
            ListNode *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }
};