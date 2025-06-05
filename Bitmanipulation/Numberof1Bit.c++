class Solution
{
public:
    int hammingWeight(int n)
    {
        bitset<32> binary(n);
        string s = binary.to_string();
        int count = 0;
        for (char c : s)
        {
            if (c == '1')
            {
                count++;
            }
        }

        return count;
    }
};