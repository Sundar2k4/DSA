class Solution
{
public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int> &arr)
    {
        int n = arr.size();
        unordered_map<int, int> freq;
        vector<int> ans;
        for (auto &i : arr)
        {
            freq[i]++;
        }
        for (int i = 1; i <= n; i++)
        {
            ans.push_back(freq[i]);
        }

        return ans;
    }
};
