class Solution
{
public:
    Node *constructDLL(vector<int> &arr)
    {
        Node *head = new Node(arr[0]);
        head->prev = NULL;
        head->next = NULL;
        int n = arr.size();
        Node *temp = head;
        for (int i = 1; i < n; i++)
        {
            Node *newone = new Node(arr[i]);
            newone->prev = temp;
            temp->next = newone;
            temp = newone;
        }

        return head;
    }
};