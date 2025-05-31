class Solution
{
public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit)
    {

        int n = deadline.size();

        vector<pair<int, int>> jobs;

        for (int i = 0; i < n; i++)
        {
            jobs.push_back({deadline[i], profit[i]});
        }

        sort(jobs.begin(), jobs.end());

        priority_queue<int, vector<int>, greater<int>> minheap;
        int curr = 1;

        for (int i = 0; i < n; i++)
        {
            if (jobs[i].first >= curr)
            {
                minheap.push(jobs[i].second);
                curr++;
            }
            else
            {
                if (!minheap.empty() && jobs[i].second > minheap.top())
                {
                    minheap.pop();
                    minheap.push(jobs[i].second);
                }
            }
        }

        int totaljobs = minheap.size();
        int sum = 0;
        vector<int> ans;
        while (!minheap.empty())
        {
            sum += minheap.top();
            minheap.pop();
        }

        return {totaljobs, sum};
    }
};