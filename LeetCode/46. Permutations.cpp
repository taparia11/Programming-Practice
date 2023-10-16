// Problem Link => https://leetcode.com/problems/permutations/

class Solution
{
public:

    // With aditional storage of ds
    void permutations(int n, vector<int> nums, vector<vector<int>> &ans, vector<int> &ds, int freq[])
    {
        if (ds.size() == n)
        {
            ans.push_back(ds);
            return;
        }
        for (int i = 0; i < n; i++)
        {
            if (!freq[i])
            {
                ds.push_back(nums[i]);
                freq[i] = 1;
                permutations(n, nums, ans, ds, freq);
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }

    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> ds;
        int n = nums.size();
        int freq[n];
        for (int i = 0; i < n; i++)
            freq[i] = 0;
        permutations(n, nums, ans, ds, freq);
        return ans;
    }
};