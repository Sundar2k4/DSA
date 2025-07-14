class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int n = height.size();
        int maxarea = 0;
        int slow = 0;
        int fast = n - 1;

        while (slow < fast)
        {
            int area = min(height[slow], height[fast]) * (fast - slow);
            maxarea = max(maxarea, area);

            if (height[slow] < height[fast])
            {
                slow++;
            }
            else
            {
                fast--;
            }
        }
        return maxarea;
    }
};
