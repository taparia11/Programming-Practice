// Problem Link => https://leetcode.com/problems/subsets-ii/description/

class Solution {
public:

    void subset(int idx, vector<int> &nums, vector<vector<int>> &ans, vector<int> &ds){
        ans.push_back(ds);
        for(int i=idx; i<nums.size(); i++){
            if(i!=idx && nums[i] == nums[i-1])
                continue;
            ds.push_back(nums[i]);
            subset(i+1, nums, ans, ds);
            ds.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(),nums.end());
        subset(0, nums, ans, ds);
        return ans;
    }
};