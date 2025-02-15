#include <vector>
#include <unordered_set>
#include <algorithm>

class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {
        if (nums.empty()) return 0;

        std::unordered_set<int> st(nums.begin(), nums.end());
        int longest = 0;

        for (const int& val : st) {
            if (st.find(val - 1) == st.end()) {
                int count = 1;
                int x = val;

                while (st.find(x + 1) != st.end()) {
                    x += 1;
                    count += 1;
                }

                longest = std::max(longest, count);
            }
        }

        return longest;
    }
};
