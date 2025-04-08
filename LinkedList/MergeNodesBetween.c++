class Solution
{
public:
    ListNode *mergeNodes(ListNode *head)
    {
        vector<int> vc;
        ListNode *temp = head->next;
        int sum = 0;

        while (temp)
        {
            if (temp->val == 0)
            {
                if (sum > 0)
                {
                    vc.push_back(sum);
                }
                sum = 0;
            }
            else
            {
                sum += temp->val;
            }
            temp = temp->next;
        }

        temp = head;
        int i = 0;
        int n = vc.size();

        while (i < n)
        {
            temp->val = vc[i++];
            if (i == n)
            {
                temp->next = NULL;
            }
            else
            {
                temp = temp->next;
            }
        }

        return head;
    }
};
