class Solution
{
public:
    vector<int> kLargest(vector<int> &arr, int k)
    {
        int n = arr.size();
        sort(arr.begin(), arr.end(), greater<int>());
        vector<int> ans;
        for (int i = 0; i < k; i++)
        {
            ans.push_back(arr[i]);
        }

        return ans;
    }
};
