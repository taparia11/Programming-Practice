// Problem Link => https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        for(auto it:grid)
            for(auto it1:it)
                if(it1<0)
                    count++;
        return count;
    }
};