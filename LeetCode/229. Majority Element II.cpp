// Problem Link => https://leetcode.com/problems/majority-element-ii/description/?envType=daily-question&envId=2023-10-05

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mapp;
        int size = nums.size()/3;
        for(int i=0;i<nums.size();i++)
            mapp[nums[i]]++;
        
        vector<int> ans;
        for(auto it = mapp.begin();it!=mapp.end();it++)
            if(it->second>size)
                ans.push_back(it->first);
        return ans;
    }
};