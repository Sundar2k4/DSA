/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *swapNodes(ListNode *head, int k)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *temp = head;
        int length = 0;

        while (temp != NULL)
        {
            length++;
            temp = temp->next;
        }

        for (int i = 1; i < k; i++)
        {
            slow = slow->next;
        }

        for (int j = 1; j < length - k + 1; j++)
        {
            fast = fast->next;
        }

        int val1 = slow->val;
        slow->val = fast->val;
        fast->val = val1;

        return head;
    }
};