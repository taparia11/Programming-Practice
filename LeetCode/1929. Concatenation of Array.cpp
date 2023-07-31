// Problem Link => https://leetcode.com/problems/concatenation-of-array/description/

class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        for (auto it : nums)
            nums.push_back(it);
        return nums;
    }
}; 