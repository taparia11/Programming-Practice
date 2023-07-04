// Problem Link => https://leetcode.com/problems/single-number-ii/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto num:nums)
            mp[num]++;
        for(auto i=mp.begin();i!=mp.end();i++)
            if(i->second==1)
                return i->first;
        return -1;
    }
};