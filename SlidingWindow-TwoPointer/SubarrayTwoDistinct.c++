class Solution
{
public:
    int totalElements(vector<int> &arr)
    {
        int left = 0, right = 0, maxc = 0;
        unordered_map<int, int> umap;

        while (right < arr.size())
        {
            umap[arr[right]]++;

            while (umap.size() > 2)
            {
                umap[arr[left]]--;
                if (umap[arr[left]] == 0)
                {
                    umap.erase(arr[left]);
                }
                left++;
            }

            maxc = max(maxc, right - left + 1);
            right++;
        }

        return maxc;
    }
};
