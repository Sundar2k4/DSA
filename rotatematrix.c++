class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        for (int i = 0; i < m; i++)
        {
            for (int j = i; j < n; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
                cout << matrix[i][j];
            }
        }

        for (int i = 0; i < m; ++i)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = i; j < n; j++)
            {
                cout << matrix[i][j];
            }
        }
    }
};