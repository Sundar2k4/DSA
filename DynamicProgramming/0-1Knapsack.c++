class Solution
{
public:
    int knapsack(int W, vector<int> &val, vector<int> &wt)
    {
        int n = wt.size();
        vector<vector<int>> dp(n, vector<int>(W + 1, -1));
        return knapsackutil(wt, val, n - 1, W, dp);
    }

    int knapsackutil(vector<int> &wt, vector<int> &val, int ind, int W, vector<vector<int>> &dp)
    {
        if (ind == 0)
        {
            if (wt[0] <= W)
                return val[0];
            else
                return 0;
        }

        if (dp[ind][W] != -1)
        {
            return dp[ind][W];
        }

        int notTaken = knapsackutil(wt, val, ind - 1, W, dp);
        int taken = 0;
        if (wt[ind] <= W)
        {
            taken = val[ind] + knapsackutil(wt, val, ind - 1, W - wt[ind], dp);
        }

        return dp[ind][W] = max(notTaken, taken);
    }
};
