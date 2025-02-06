class Solution
{
public:
    ListNode *deleteMiddle(ListNode *head)
    {
        if (!head || !head->next)
            return nullptr;
        ListNode *temp = head;
        ListNode *old = temp;
        int count = 0;
        while (temp)
        {
            count++;
            temp = temp->next;
        }
        temp = head;
        for (int i = 0; i < count / 2 - 1; i++)
        {
            old = old->next;
        }
        old->next = old->next->next;

        return head;
    }
};
