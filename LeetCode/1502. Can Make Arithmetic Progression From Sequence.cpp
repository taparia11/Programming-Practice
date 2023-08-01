// Problem Link =>  https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/description/

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int diff(arr[1]-arr[0]);
        for(int i=0;i<arr.size()-1;i++)
            if(arr[i+1]-arr[i]==diff)
                continue;
            else
                return false;
        return true;
    }
}; 