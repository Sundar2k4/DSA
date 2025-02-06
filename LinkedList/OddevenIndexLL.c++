class Solution
{
public:
    ListNode *oddEvenList(ListNode *head)
    {
        if (!head)
            return head;

        ListNode *temp = head;
        vector<int> vc;

        while (temp && temp->next)
        {
            vc.push_back(temp->val);
            temp = temp->next->next;
        }
        if (temp)
        {
            vc.push_back(temp->val);
        }

        temp = head->next;
        while (temp && temp->next)
        {
            vc.push_back(temp->val);
            temp = temp->next->next;
        }
        if (temp)
        {
            vc.push_back(temp->val);
        }

        temp = head;
        int i = 0;
        while (temp != NULL)
        {
            temp->val = vc[i];
            i++;
            temp = temp->next;
        }

        return head;
    }
};
