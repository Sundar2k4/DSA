class Solution
{
public:
    int getDecimalValue(ListNode *head)
    {
        vector<int> vc;
        ListNode *temp = head;

        while (temp != NULL)
        {
            vc.push_back(temp->val);
            temp = temp->next;
        }

        int decimal = 0;
        for (auto &i : vc)
        {
            decimal = decimal * 2 + i;
        }

        return decimal;
    }
};
