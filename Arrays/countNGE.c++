class Solution
{
public:
    vector<int> count_NGE(int n, vector<int> &arr, int queries, vector<int> &indices)
    {
        vector<int> ans;

        for (int i = 0; i < queries; i++)
        {
            int index = indices[i];
            int count = 0;

            // Count elements greater than arr[index] that come after it
            for (int j = index + 1; j < n; j++)
            {
                if (arr[j] > arr[index])
                {
                    count++;
                }
            }

            ans.push_back(count);
        }

        return ans;
    }
};
