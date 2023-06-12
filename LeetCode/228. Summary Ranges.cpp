// Problem Link =>  https://leetcode.com/problems/summary-ranges/description/

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int first=0,last=0;
        vector<string> str;
        if(nums.empty()){
            return str;
        }
        first=last=nums[0];
        for(int i=1;i<nums.size();i++){
            if(last==(nums[i]-1)){
                last=nums[i];
            }
            else{
                if(first!=last){
                    str.push_back(to_string(first)+"->"+to_string(last));
                    first=last=nums[i];
                }
                else{
                    str.push_back(to_string(first));
                    first=last=nums[i];
                }
            }
            
        }
        if(first!=last){
                    str.push_back(to_string(first)+"->"+to_string(last));
                }
            else{
                    str.push_back(to_string(first));
                }

        return str;
    }
};