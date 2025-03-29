class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        int n = nums.size();
        priority_queue<int, vector<int>, greater<int>> prque;

        for (auto &i : nums)
        {
            prque.push(i);
            if (prque.size() > k)
            {
                prque.pop();
            }
        }

        return prque.top();
    }
};