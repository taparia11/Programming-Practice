// Problem Link => https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/description/

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int temp=0,count=0;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)
                count++;
            else{
                res.push_back(count);
                count =0;
            }
        }

        if(count>0) res.push_back(count);

        if(res.size()<=1)   return count-1;
        for(int i=1;i<res.size();i++)
            if(res[i]+res[i-1]>temp)
                temp = res[i] + res[i-1];
    
        return temp;
    }
};