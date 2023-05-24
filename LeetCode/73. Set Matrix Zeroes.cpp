// Problem Link => https://leetcode.com/problems/set-matrix-zeroes/description/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> vec;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0)
                    vec.push_back({i,j});
            }
        }
        for(auto it:vec){
            for(int i=0;i<matrix[it.first].size();i++){
                matrix[it.first][i]=0;
            }
               for(int i=0;i<matrix.size();i++){
                matrix[i][it.second]=0;
            }
        }
            // cout<<it.first<<" "<<it.second;

    }
};