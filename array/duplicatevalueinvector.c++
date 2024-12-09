#include <unordered_set>
#include <vector>
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        unordered_set<int> seen;

        for (int num : nums)
        {
            // If the number is already in the set, return it as the duplicate
            if (seen.find(num) != seen.end())
            {
                return num;
            }
            // Otherwise, add the number to the set
            seen.insert(num);
        }

        return -1; // In case there's no duplicate, though it's guaranteed there is one.
    }
};
