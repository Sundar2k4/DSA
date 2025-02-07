class Solution
{
public:
    ListNode *sortList(ListNode *head)
    {
        ListNode *temp = head;
        vector<int> vc;
        while (temp != NULL)
        {
            vc.push_back(temp->val);
            temp = temp->next;
        }
        sort(vc.begin(), vc.end());
        temp = head;
        int i = 0;
        while (temp)
        {
            temp->val = vc[i];
            i++;
            temp = temp->next;
        }

        return head;
    }
};