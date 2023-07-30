// Problem Link => https://leetcode.com/problems/longest-common-prefix/
 
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string s = "";
        int n = strs.size();
        int arr[n];
        int minlen = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            arr[i] = strs[i].length();
            minlen = min(minlen, arr[i]);
        }
        if (n == 1)
        {
            s = strs[0];
            return s;
        }
        int count = 0, res = INT_MAX;
        for (int i = 0; i < 1; i++)
        {
            for (int j = 1; j < n; j++)
            {
                count = 0;
                for (int k = 0; k < minlen; k++)
                {
                    if (strs[i][k] == strs[j][k])
                        count++;
                    else
                        break;
                }
                res = min(res, count);
            }
        }
        for (int i = 0; i < res; i++)
            s = s + strs[0][i];
        return s;
    }
};