class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> vc;
        vector<int> ans;
        for (int i = 0; i <= n; i++)
        {
            vc.push_back(i);
        }

        for (auto &i : vc)
        {
            bitset<32> binary(i);
            string s = binary.to_string();
            int count = 0;
            for (char i : s)
            {
                if (i == '1')
                {
                    count++;
                }
            }

            ans.push_back(count);
        }

        return ans;
    }
};