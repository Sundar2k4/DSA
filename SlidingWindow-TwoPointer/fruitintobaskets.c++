class Solution
{
public:
    int totalFruit(vector<int> &fruits)
    {
        int n = fruits.size();
        int maxval = 0;
        int right = 0;
        int left = 0;
        unordered_map<int, int> basket;
        while (right < n)
        {
            basket[fruits[right]]++;

            while (basket.size() > 2)
            {
                basket[fruits[left]]--;
                if (basket[fruits[left]] == 0)
                {
                    basket.erase(fruits[left]);
                }
                left++;
            }

            maxval = max(maxval, right - left + 1);
            right++;
        }

        return maxval;
    }
};