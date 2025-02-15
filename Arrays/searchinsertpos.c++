class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == target)
            {
                return i; // Return the index if target is found
            }
            if (nums[i] < target && (i == n - 1 || nums[i + 1] > target))
            {
                return i + 1; // Return the insertion index
            }
        }
        return 0; // If target is smaller than all elements, it should be inserted at the start
    }
};
