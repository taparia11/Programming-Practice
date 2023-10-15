// Problem Link => https://leetcode.com/problems/combination-sum/description/

class Solution {
public:

    void findCombinationSum(int idx, int n, int target, vector<int> &candidates, vector<vector<int>> &ans, vector<int>&ds ,int sum){
        if(sum > target)
            return;
        if(idx>=n){
            if(sum == target){
                ans.push_back(ds);
            }
            return;
        }
        ds.push_back(candidates[idx]);
        sum += candidates[idx];
        findCombinationSum(idx, n, target, candidates, ans, ds, sum);
        ds.pop_back();
        sum -= candidates[idx];
        findCombinationSum(idx+1, n, target, candidates, ans, ds, sum);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findCombinationSum(0, candidates.size(), target, candidates, ans, ds, 0);
        return ans;
    }
};