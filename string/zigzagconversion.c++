class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (numRows == 1)
            return s;

        int n = s.size();
        vector<vector<char>> zigzag(numRows, vector<char>(n, '\0'));
        int curr = 0, row = 0, col = 0;

        while (curr < n)
        {
            while (row < numRows && curr < n)
            {
                zigzag[row++][col] = s[curr++];
            }

            row = max(0, row - 2);

            while (row > 0 && curr < n)
            {
                zigzag[row--][++col] = s[curr++];
            }

            col++;
        }

        string ans = "";
        for (int i = 0; i < numRows; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (zigzag[i][j] != '\0')
                {
                    ans += zigzag[i][j];
                }
            }
        }

        return ans;
    }
};
