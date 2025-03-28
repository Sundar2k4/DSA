class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        stack<int> st;
        ListNode *temp = head;
        while (temp != NULL)
        {
            st.push(temp->val);
            temp = temp->next;
        }

        temp = head;
        while (temp && temp->val == st.top())
        {
            st.pop();
            temp = temp->next;
        }
        if (st.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};