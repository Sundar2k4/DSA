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
    ListNode *rotateRight(ListNode *head, int k)
    {
        int length = 1;
        ListNode *temp = head;
        if (!head)
        {
            return NULL;
        }
        while (temp->next)
        {
            temp = temp->next;
            length++;
        }

        temp->next = head;
        k = k % length;
        int point = length - k;
        while (point--)
        {
            temp = temp->next;
        }
        head = temp->next;
        temp->next = NULL;
        return head;
    }
};