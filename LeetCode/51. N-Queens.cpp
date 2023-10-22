// Problem Link => https://leetcode.com/problems/n-queens/description/

class Solution
{
public:
    // Space Optimized Approch through Hashing

    class Solution
    {
    public:
        void solve(int col, int n, vector<vector<string>> &ans, vector<string> &board, vector<int> &right, vector<int> &lowerDiagonal, vector<int> &upperDiagonal)
        {
            if (col == n)
            {
                ans.push_back(board);
                return;
            }
            for (int row = 0; row < n; row++)
            {
                if (right[row] != 'Q' && lowerDiagonal[row + col] != 'Q' && upperDiagonal[n - 1 + col - row] != 'Q')
                {
                    right[row] = 'Q';
                    lowerDiagonal[row + col] = 'Q';
                    upperDiagonal[n - 1 + col - row] = 'Q';
                    board[row][col] = 'Q';
                    solve(col + 1, n, ans, board, right, lowerDiagonal, upperDiagonal);
                    board[row][col] = '.';
                    right[row] = '.';
                    lowerDiagonal[row + col] = '.';
                    upperDiagonal[n - 1 + col - row] = '.';
                }
            }
        }

        vector<vector<string>> solveNQueens(int n)
        {
            vector<vector<string>> ans;
            vector<string> board(n);
            string s(n, '.');
            for (int i = 0; i < n; i++)
                board[i] = s;
            vector<int> right(n, 0), lowerDiagonal(2 * n - 1, 0), upperDiagonal(2 * n - 1, 0);
            solve(0, n, ans, board, right, lowerDiagonal, upperDiagonal);
            return ans;
        }
    };

    // // Brute Approch
    //     bool isSafe(vector<string> &board, int col, int row, int n){
    //         int dupcol = col;
    //         int duprow = row;
    // // checking Attack in three direction's
    // //  Right Side (Straight Right)
    //         while(col>=0){
    //             if(board[row][col]=='Q')
    //                 return false;
    //             col--;
    //         }
    //         col = dupcol;
    // // Bottom-Right (Diagonal)
    //         while(col>=0 && row<n){
    //             if(board[row][col]=='Q')
    //                 return false;
    //             col--;
    //             row++;
    //         }
    //         col = dupcol;
    //         row = duprow;
    // // Top-Left (Diagonal)
    //         while(col>=0 && row>=0){
    //             if(board[row][col]=='Q')
    //                 return false;
    //             col--;
    //             row--;
    //         }

    //         return true;
    //     }

    //     void solve(int col, vector<vector<string>> &ans, vector<string> &board, int n){
    //         // if col reaches to n means a possible solution occured
    //         // if n = 4 then col will be [0, 1, 2, 3, 4] at col(4) == N(4) it will push that in to ans vector
    //         if(col == n){
    //             ans.push_back(board);
    //             return;
    //         }

    //         //Iterating over the row's
    //         // Placing Queen on every row to check possible condition
    //         // column will only increase only in new recurrision
    //         for(int row = 0; row < n; row++){
    //             //Checking other queen's are attacking on this position or not
    //             if(isSafe(board, col, row, n)){
    //                 //If no Queen attacking on this position then put Queen here
    //                 board[row][col] = 'Q';
    //                 solve(col+1, ans, board, n);
    //                 board[row][col] = '.';
    //             }
    //         }
    //     }

    //     vector<vector<string>> solveNQueens(int n) {
    //         vector<vector<string>> ans;
    //         vector<string> board(n);
    //         string s(n , '.'); // Creating a string of length n  filling with '.'
    //         for(int i=0; i<n; i++)
    //             board[i] = s; // marking each cell of board with '.'
    //         solve(0, ans, board, n); // solve(Column_Number, Result, temprarory_board, Size_of_board)
    //         return ans;
    //     }
};