class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> arr(n);
        int position = 0;
        int posPosition = 1;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > 0)
            {
                arr[position] = nums[i];
                position += 2;
            }

            if (nums[i] < 0)
            {
                arr[posPosition] = nums[i];
                posPosition += 2;
            }
        }

        return arr;
    }
};
