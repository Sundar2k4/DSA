#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        k = k % n; // Handle cases where k >= n

        if (k == 0)
            return; // No rotation needed if k is 0 or a multiple of n

        // Create a temporary vector to store the last k elements
        vector<int> temp(k);

        // Store the last k elements in the temp vector
        for (int i = 0; i < k; i++)
        {
            temp[i] = nums[n - k + i];
        }

        // Shift the remaining elements to the right by k positions
        for (int i = n - k - 1; i >= 0; i--)
        {
            nums[i + k] = nums[i];
        }

        // Move the elements from temp to the front of the array
        for (int i = 0; i < k; i++)
        {
            nums[i] = temp[i];
        }
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {4, 5, 6, 7, 1, 2, 3}; // Example array
    int k = 3;                                // Number of positions to rotate

    cout << "Original array: ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    solution.rotate(nums, k);

    cout << "Rotated array: ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
