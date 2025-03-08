class Solution
{
private:
    ListNode *deletealloccurences(ListNode *temp, int target)
    {
        if (!temp)
        {
            return nullptr;
        }
        temp->next = deletealloccurences(temp->next, target);
        return (temp->val == target) ? temp->next : temp;
    }

public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (!head)
            return nullptr;

        ListNode *temp = head;

        while (temp && temp->next)
        {
            if (temp->val == temp->next->val)
            {
                int target = temp->val;
                head = deletealloccurences(head, target);
                temp = head;
            }
            else
            {
                temp = temp->next;
            }
        }

        return head;
    }
};
