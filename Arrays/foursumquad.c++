
class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &arr, int target)
    {
        int n = arr.size();
        vector<vector<int>> ans;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    for (int l = k + 1; l < n; l++)
                    {
                        long long sum = (long long)arr[i] + arr[j] + arr[k] + arr[l];
                        if (sum == target)
                        {
                            vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
                            sort(temp.begin(), temp.end());
                            ans.push_back(temp);
                        }
                    }
                }
            }
        }

        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());

        return ans;
    }
};