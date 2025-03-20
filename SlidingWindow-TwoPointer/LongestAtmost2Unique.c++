#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int totalElements(vector<int> &arr)
    {
        int n = arr.size();
        int max_len = 0;

        for (int i = 0; i < n; i++)
        {
            unordered_map<int, int> umap;
            for (int j = i; j < n; j++)
            {
                umap[arr[j]]++;
                if (umap.size() <= 2)
                {
                    max_len = max(max_len, j - i + 1);
                }
                else
                {
                    break;
                }
            }
        }

        return max_len;
    }
};