class Solution
{
public:
    bool isNStraightHand(vector<int> &hand, int groupSize)
    {
        int n = hand.size();
        if (n % groupSize != 0)
            return false;

        map<int, int> mp;
        for (auto &i : hand)
        {
            mp[i]++;
        }

        for (auto &pair : mp)
        {
            int start = pair.first;
            int freq = pair.second;
            if (freq > 0)
            {
                for (int i = 1; i < groupSize; i++)
                {
                    if (mp[start + i] < freq)
                        return false;
                    mp[start + i] -= freq;
                }
            }
        }
        return true;
    }
};
