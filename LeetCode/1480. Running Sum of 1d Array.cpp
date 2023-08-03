// Problem Link => https://leetcode.com/problems/running-sum-of-1d-array/description/

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        vector<int> arr;
        int a = 0;
        for (auto it : nums)
        {
            arr.push_back(it + a);
            a = it + a;
        }
        return arr;
    }
}; 