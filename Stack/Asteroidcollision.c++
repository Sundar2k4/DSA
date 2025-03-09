class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &asteroids)
    {
        int n = asteroids.size();
        stack<int> st;
        vector<int> ans;
        for (auto &i : asteroids)
        {
            bool collided = false;
            while (!st.empty() && st.top() > 0 && i < 0)
            {
                if (abs(st.top()) < abs(i))
                {
                    st.pop();
                    continue;
                }

                else if (abs(st.top()) == abs(i))
                {
                    st.pop();
                }
                collided = true;
                break;
            }

            if (!collided)
            {
                st.push(i);
            }
        }

        while (!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};