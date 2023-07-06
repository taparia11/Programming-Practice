// Problem Link => https://leetcode.com/problems/majority-element/submissions/987999021/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto it:nums)
            mp[it]++;
        int max = INT_MIN, val=0;
        for(auto it:nums){
            if(max<mp[it]){
                val = it;
                max = mp[it];
            }
        }

        return val;
    }
};