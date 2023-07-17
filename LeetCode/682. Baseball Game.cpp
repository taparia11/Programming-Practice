// Problem Link => https://leetcode.com/problems/baseball-game/

class Solution
{
public:
    int calPoints(vector<string> &opr)
    {
        stack<int> st;
        int val, val1, ans = 0;
        for (string it : opr)
        {
            if (it == "C")
            {
                st.pop();
            }
            else if (it == "D")
            {
                st.push(st.top() * 2);
            }
            else if (it == "+")
            {
                val = st.top();
                st.pop();
                val1 = st.top();
                st.push(val);
                st.push(val + val1);
            }
            else
            {
                st.push(stoi(it));
            }
        }
        while (!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};