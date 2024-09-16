class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end()); // Sort the array
        set<vector<int>> st;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            // Skip duplicates for the first element
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            set<int> hashmapp;
            for (int j = i + 1; j < n; j++)
            {
                int third = -(nums[i] + nums[j]);

                if (hashmapp.find(third) != hashmapp.end())
                {
                    vector<int> temp = {nums[i], nums[j], third};
                    st.insert(temp); // Sorting no longer needed since array is sorted
                }

                hashmapp.insert(nums[j]);
            }
        }

        // Convert set to vector
        vector<vector<int>> res(st.begin(), st.end());
        return res;
    }
};
