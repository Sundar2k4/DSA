class Solution
{
public:
    int minimumRecolors(string blocks, int k)
    {

        int s = 0;
        int f = k - 1;
        vector<char> vc(blocks.begin(), blocks.end());
        int n = vc.size();
        int minops = INT_MAX;
        int count = 0;
        while (f < n)
        {
            for (int i = s; i <= f; i++)
            {
                if (vc[i] == 'W')
                {
                    count++;
                }
            }

            if (count < minops)
            {
                minops = count;
            }
            count = 0;
            s++;
            f++;
        }

        return minops;
    }
};