// Problem Link => https://leetcode.com/problems/contains-duplicate/

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> hashSet;
        for (int num : nums)
        {
            if (hashSet.count(num) > 0)
                return true;
            hashSet.insert(num);
        }
        return false;
    }
};