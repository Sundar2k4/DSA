#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int characterReplacement(string s, int k)
    {
        int n = s.length();
        int max_len = 0, max_freq = 0, left = 0;
        unordered_map<char, int> freq;

        for (int right = 0; right < n; ++right)
        {
            freq[s[right]]++;
            max_freq = max(max_freq, freq[s[right]]);

            while ((right - left + 1) - max_freq > k)
            {
                freq[s[left]]--;
                left++;
            }

            max_len = max(max_len, right - left + 1);
        }

        return max_len;
    }
};
