class Solution
{
public:
    void deleteAllOccurOfX(struct Node **head_ref, int x)
    {
        Node *temp = *head_ref;
        vector<int> vc;
        while (temp != NULL)
        {
            vc.push_back(temp->data);
            temp = temp->next;
        }

        vc.erase(remove(vc.begin(), vc.end(), x), vc.end());
        temp = *head_ref;
        for (int i = 0; i < vc.size(); i++)
        {

            temp->data = vc[i];
            if (i == vc.size() - 1)
            {
                temp->next = NULL;
            }
            else
            {
                temp = temp->next;
            }
        }
    }
};