// Problem Link => https://leetcode.com/problems/max-consecutive-ones/

class Solution {
public:

//Two Pointer Approch
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0,count=0;
        int first=0,second=0,n = nums.size();
        while(second<n){
            if(nums[first]==1 && nums[second]==1){
                count++;
                ans = max(ans,count);                
                second++;
            }
            else if(nums[first]==1 && nums[second] != 1){
                first = second;
                count=0;
                second++;
        }
            else if(nums[first] != 1 && nums[second] == 1){
                first = second;
           }
            else
                second++;
                
        }
        return ans;
            
    // BruteForce Approch    
        //         ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
        //         int count=0;
        //         int i=0;
        //         for(auto it:nums){
        //             if(it==0){
        //                 count = std::fmax(count,i);
        //                 i=0;
        //             }
        //             else{
        //                 i++;
        //             }
        //         }
                
        //         return std::fmax(count,i);
    }
};