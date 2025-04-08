class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {

        while (head != nullptr && head->val == val)
        {
            ListNode *todelete = head;
            head = head->next;
            delete todelete;
        }

        ListNode *temp = head;

        while (temp != nullptr && temp->next != nullptr)
        {
            if (temp->next->val == val)
            {
                ListNode *todelete = temp->next;
                temp->next = temp->next->next;
                delete todelete;
            }
            else
            {
                temp = temp->next;
            }
        }

        return head;
    }
};
