// Problem Link => https://leetcode.com/problems/combination-sum-ii/description/

class Solution
{
private:
    void findUniqueCombinations(int idx, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
    {
        if (target == 0)
        {
            ans.push_back(ds);
            return;
        }
        for (int i = idx; i < arr.size(); i++)
        {
            if (i > idx && arr[i] == arr[i - 1])
                continue;
            if (arr[i] > target)
                break;
            ds.push_back(arr[i]);
            findUniqueCombinations(i + 1, target - arr[i], arr, ans, ds);
            ds.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        findUniqueCombinations(0, target, candidates, ans, ds);
        return ans;
    }
};