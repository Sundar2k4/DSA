class Solution
{
public:
    int maxScore(vector<int> &cardPoints, int k)
    {
        int rightsum = 0, leftsum = 0;
        int n = cardPoints.size();
        int maxsum = 0;

        for (int i = 0; i < k; i++)
        {
            leftsum += cardPoints[i];
        }

        maxsum = leftsum;
        int rightlen = n - 1;

        for (int j = k - 1; j >= 0; j--)
        {
            leftsum -= cardPoints[j];
            rightsum += cardPoints[rightlen];
            rightlen--;
            maxsum = max(maxsum, leftsum + rightsum);
        }

        return maxsum;
    }
};
