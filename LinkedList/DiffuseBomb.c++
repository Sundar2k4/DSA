class Solution
{
public:
    struct Node
    {
        int data;
        Node *next;
        Node *prev;
        Node(int val) : data(val), next(nullptr), prev(nullptr) {}
    };

    Node *createdoublylinkedlist(vector<int> &code)
    {
        if (code.empty())
            return nullptr;

        Node *head = new Node(code[0]);
        Node *curr = head;

        for (int i = 1; i < code.size(); i++)
        {
            Node *temp = new Node(code[i]);
            curr->next = temp;
            temp->prev = curr;
            curr = temp;
        }
        curr->next = head;
        head->prev = curr;
        return head;
    }

    vector<int> decrypt(vector<int> &code, int k)
    {
        int n = code.size();
        vector<int> vc(n, 0);
        if (n == 0 || k == 0)
            return vc;

        Node *head = createdoublylinkedlist(code);

        for (int idx = 0; idx < n; idx++)
        {
            Node *temp = head;
            int req = abs(k);
            int sum = 0;

            if (k < 0)
            {
                for (int p = 0; p < req; p++)
                {
                    temp = temp->prev;
                    sum += temp->data;
                }
            }
            else
            {
                for (int p = 0; p < req; p++)
                {
                    temp = temp->next;
                    sum += temp->data;
                }
            }
            vc[idx] = sum;
            head = head->next;
        }
        return vc;
    }
};
