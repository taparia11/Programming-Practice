// Problem Link => https://leetcode.com/problems/single-number/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> hashmap;
        for(auto num:nums)
            hashmap[num]++;
        for(auto it:hashmap)
            if(it.second==1){
                return it.first;
            }
        return 0;
    }
};