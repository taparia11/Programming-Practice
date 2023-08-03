// Problem Link => https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/?envType=daily-question&envId=2023-10-09

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1, -1};
        int left = binarySearch(nums,  target, true);
        int right = binarySearch(nums,  target, false);
        ans[0] = left;
        ans[1] = right;
        return ans;
    }

    int binarySearch(vector<int> nums, int target, bool isSearchingLeft){
        int left = 0;
        int right = nums.size()-1;
        int idx = -1;

        while(left<=right){
            int mid = left + (right - left) / 2;
            if(nums[mid]>target)
                right = mid -1;
            else if(nums[mid]<target)
                left = mid +1;
            else{
                idx = mid;
                if(isSearchingLeft)
                    right = mid -1;
                else
                    left = left +1;
            }
        }
        return idx;
    }
};