vector<int> findTwoElement(vector<int> &arr)
{
    int n = arr.size();
    vector<int> hash(n + 1, 0); // Create a hash array to count occurrences

    // Count occurrences of each element in arr
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    int nooccur = -1;   // To store the number that does not occur
    int douboccur = -1; // To store the number that occurs twice

    // Find the missing and duplicated elements
    for (int i = 1; i <= n; i++)
    {
        if (hash[i] == 2)
        {
            douboccur = i; // Found the element that occurs twice
        }
        else if (hash[i] == 0)
        {
            nooccur = i; // Found the missing element
        }
    }

    // Handle case where no duplicate or missing number found
    if (douboccur == -1)
    {
        // Handle the case where no number is found that occurs twice
        // e.g., return an appropriate error code or handle it as needed
    }
    if (nooccur == -1)
    {
        // Handle the case where no missing number is found
        // e.g., return an appropriate error code or handle it as needed
    }

    return {douboccur, nooccur}; // Return the results
}