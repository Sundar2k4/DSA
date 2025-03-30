class Solution
{
public:
    // Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        vector<int> ans;
        priority_queue<int, vector<int>, greater<int>> pq;
        int n = arr.size();
        for (int i = 0; i < K; i++)
        {
            for (int j = 0; j < K; j++)
            {
                pq.push(arr[i][j]);
            }
        }

        while (!pq.empty())
        {
            ans.push_back(pq.top());
            pq.pop();
        }

        return ans;
    }
};