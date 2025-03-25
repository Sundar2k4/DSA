class Solution
{
public:
    int numberOfSubstrings(string s)
    {
        int n = s.length();
        unordered_map<char, int> hash;
        int count = 0;
        int left = 0;
        for (int right = 0; right < n; right++)
        {
            hash[s[right]]++;

            while (hash['a'] > 0 && hash['b'] > 0 && hash['c'] > 0)
            {
                count += (n - right);

                hash[s[left]]--;
                left++;
            }
        }

        return count;
    }
};
