class Solution
{
public:
    int maxLen(vector<int> &arr, int n)
    {
        int max_sum = 0;
        int sum = 0;
        unordered_map<int, int> hassh;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];

            if (sum == 0)
            {
                max_sum = i + 1;
            }
            else
            {
                if (hassh.find(sum) != hassh.end())
                {
                    max_sum = max(max_sum, i - hassh[sum]);
                }
                else
                {
                    hassh[sum] = i;
                }
            }
        }

        return max_sum;
    }
};
