class Solution
{
public:
    void finddiff(int s, int f, const vector<int> &nums, vector<int> &diffvector)
    {
        int currMin = nums[s];
        int currMax = nums[s];
        for (int i = s; i <= f; i++)
        {
            if (nums[i] > currMax)
                currMax = nums[i];
            if (nums[i] < currMin)
                currMin = nums[i];
        }
        diffvector.push_back(currMax - currMin);
    }

    int minimumDifference(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        vector<int> diffvector;

        int s = 0, f = k - 1;
        while (f < n)
        {
            finddiff(s, f, nums, diffvector);
            s++;
            f++;
        }

        return *min_element(diffvector.begin(), diffvector.end());
    }
};