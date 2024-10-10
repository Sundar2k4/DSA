class Solution
{
public:
    std::vector<int> searchRange(std::vector<int> &nums, int target)
    {
        std::vector<int> ans = {-1, -1};
        int n = nums.size();

        int first = std::lower_bound(nums.begin(), nums.end(), target) - nums.begin();

        int last = std::upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;

        if (first <= last && first < n && nums[first] == target)
        {
            ans[0] = first;
            ans[1] = last;
        }

        return ans;
    }
};