int solve(int *A, int n1, int B)
{
    int count = 0; // Move count outside the loop to accumulate properly.
    int i, j;
    for (i = 0; i < n1; i++)
    {
        int xorValue = 0; // Initialize XOR for the current subarray starting at i.
        for (j = i; j < n1; j++)
        {
            xorValue ^= A[j]; // Calculate XOR for subarray A[i...j]
            if (xorValue == B)
            {
                count++; // Increment the count if XOR matches B
            }
        }
    }

    return count;
}