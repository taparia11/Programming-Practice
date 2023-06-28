// Problem Link => https://leetcode.com/problems/binary-search/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int first=0,mid=0,last=nums.size()-1;
        while(first<=last){
            mid = (first+last)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                last=--mid;
            else
                first = ++mid;
        }
            return -1;
    }
};