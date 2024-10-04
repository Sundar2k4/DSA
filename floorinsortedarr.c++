
// lowerbound
class Solution
{
public:
    int findFloor(vector<long long> &v, long long n, long long x)
    {
        int low = 0, high = n - 1;
        int ans = -1; // Initialize ans to -1, indicating no floor found

        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (v[mid] <= x)
            {
                ans = mid;     // v[mid] could be a candidate for the floor
                low = mid + 1; // Look for a larger index
            }
            else
            {
                high = mid - 1; // Look on the left side
            }
        }

        return ans; // Returns -1 if no valid floor was found
    }
};
