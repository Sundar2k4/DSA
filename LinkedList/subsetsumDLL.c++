class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        Node* temp1 = head;
        vector<pair<int, int>> vc;

        while (temp1) 
        {
            Node* temp2 = temp1->next; 

            while (temp2)
            {
                if (temp1->data + temp2->data == target)
                {
                    vc.push_back({temp1->data, temp2->data});
                }
                temp2 = temp2->next; 
            }

            temp1 = temp1->next;
        }
        
        return vc; 
    }
};