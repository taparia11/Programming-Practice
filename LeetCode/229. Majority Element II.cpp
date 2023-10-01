// Problem Link => https://leetcode.com/problems/majority-element-ii/description/?envType=daily-question&envId=2023-10-05

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    // Creating unodered map to store key and value of numd ->  { value, Count}
        unordered_map<int, int> mapp;
    //Applying the problem discription condition
        int size = nums.size()/3;
    //inserting count of all elements in unordered map.
        for(int i=0;i<nums.size();i++)
            mapp[nums[i]]++;
    
        vector<int> ans;
    // Iterating over every element of unordered_map to check the condition on count -> n/3 
        for(auto it = mapp.begin();it!=mapp.end();it++)
            if(it->second>size)
                ans.push_back(it->first);
        return ans;
    }
};