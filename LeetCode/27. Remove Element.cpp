// Problem Link => https://leetcode.com/problems/remove-element/

class Solution
{
public:
    // Two pointer approch
    int removeElement(vector<int> &nums, int val)
    {
        int k = 0;
        for (int i = 0; i < nums.size(); i++)
            if (nums[i] != val)
            {
                nums[k] = nums[i];
                k++;
            }

        // newbie copy check swap
        // int count=0;
        // vector<int> arr;
        // for(auto it:nums)
        //     if(it!=val){
        //         count++;
        //         arr.push_back(it);
        //     }
        // arr.swap(nums);
        // return count;
        return k;
    }
};