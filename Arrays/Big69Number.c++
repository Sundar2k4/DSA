class Solution
{
public:
    void checkposs(vector<int> vc, int num, int &maxval, int ind)
    {
        int n = vc.size();
        if (ind >= n)
            return;

        if (vc[ind] == 6)
        {
            vc[ind] = 9;

            int result = 0;
            for (auto &d : vc)
            {
                result = result * 10 + d;
            }

            if (result > maxval)
            {
                maxval = result;
            }

            return;
        }

        checkposs(vc, num, maxval, ind + 1);
    }

    int maximum69Number(int num)
    {
        vector<int> vc;
        int val = num;

        while (val > 0)
        {
            vc.push_back(val % 10);
            val /= 10;
        }
        reverse(vc.begin(), vc.end());

        int maxval = num;
        checkposs(vc, num, maxval, 0);

        return maxval;
    }
};
