// Problem Link => https://leetcode.com/problems/find-target-indices-after-sorting-array/description/

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(begin(nums), end(nums));
        vector<int> ans;
        int i = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        for(;i<nums.size();i++)
            if(nums[i]==target)
                ans.emplace_back(i);

        return ans;
    }
};