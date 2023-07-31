// Problem Link => https://leetcode.com/problems/richest-customer-wealth/description/

class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int a = 0;
        for (auto vctr : accounts)
        {
            for (int i = 1; i < vctr.size(); i++)
            {
                vctr[i] += vctr[i - 1];
            }
            if (*(vctr.rbegin()) > a)
                a = *(vctr.rbegin());
        }
        return a;
    }
}; 