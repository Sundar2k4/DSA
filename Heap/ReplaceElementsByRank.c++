class Solution
{
public:
    vector<int> replaceWithRank(vector<int> &arr, int N)
    {
        // Min-heap to store elements
        priority_queue<int, vector<int>, greater<int>> minHeap;

        // Push all elements into the heap
        for (int num : arr)
        {
            minHeap.push(num);
        }

        // Map to store rank
        unordered_map<int, int> rankMap;
        int rank = 1;

        // Extract elements from the heap and assign ranks
        while (!minHeap.empty())
        {
            int num = minHeap.top();
            minHeap.pop();

            // Assign rank only if not already assigned (to handle duplicates)
            if (rankMap.find(num) == rankMap.end())
            {
                rankMap[num] = rank++;
            }
        }

        // Replace elements with their ranks
        vector<int> ans;
        for (int num : arr)
        {
            ans.push_back(rankMap[num]);
        }

        return ans;
    }
};