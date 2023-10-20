// Problem Link => https://leetcode.com/problems/n-queens/description/

class Solution {
public:

    bool isSafe(vector<string> &board, int col, int row, int n){
        int dupcol = col;
        int duprow = row;

        while(col>=0){
            if(board[row][col]=='Q')
                return false;
            col--;
        }
        col = dupcol;
        while(col>=0 && row<n){
            if(board[row][col]=='Q')
                return false;
            col--;
            row++;
        }
        col = dupcol;
        row = duprow;
        while(col>=0 && row>=0){
            if(board[row][col]=='Q')
                return false;
            col--;
            row--;
        }
        return true;
    }

    void solve(int col, vector<vector<string>> &ans, vector<string> &board, int n){
        if(col == n){
            ans.push_back(board);
            return;
        }

        for(int row = 0; row < n; row++){
            if(isSafe(board, col, row, n)){
                board[row][col] = 'Q';
                solve(col+1, ans, board, n);
                board[row][col] = '.'; 
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n , '.');
        for(int i=0; i<n; i++)  
            board[i] = s;
        solve(0, ans, board, n);
        return ans;
    }
};