class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> nw;
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = i; j < n; j++)
            {
                if (nums[j] == nums[i])
                {
                    count++;
                }
            }

            if (count > (n / 3) && find(nw.begin(), nw.end(), nums[i]) == nw.end())
            {
                nw.push_back(nums[i]);
            }
            if (nw.size() == 2)
            {
                break;
            }
        }
        return nw;
    }
};
