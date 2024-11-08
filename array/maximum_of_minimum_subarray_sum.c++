class Solution
{
public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr)
    {
        int n = arr.size();
        if (n < 2)
            return -1; // If there are fewer than 2 elements, return -1

        int maxSum = INT_MIN;

        // Iterate through the array, considering each consecutive pair
        for (int i = 0; i < n - 1; i++)
        {
            int currentSum = arr[i] + arr[i + 1]; // Calculate the sum of each pair
            if (currentSum > maxSum)
            {
                maxSum = currentSum; // Update maxSum if the current pair's sum is greater
            }
        }

        return maxSum;
    }
};
