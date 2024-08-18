class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> pascalTriangle(numRows);
        for (int n = 0; n < numRows; n++)
        {
            pascalTriangle[n].resize(n + 1);
            pascalTriangle[n][0] = 1;

            long long res = 1;
            for (int i = 1; i <= n; i++)
            {
                res = res * (n - i + 1) / i;
                pascalTriangle[n][i] = res;
            }
        }

        return pascalTriangle;
    }
};
