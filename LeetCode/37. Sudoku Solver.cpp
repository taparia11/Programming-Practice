// Problem Link => https://leetcode.com/problems/sudoku-solver/description/?source=submission-ac

class Solution {
public:

    bool solve(vector<vector<char>> &board){
        //iterating over row
        for(int row = 0; row<board.size(); row++){
        //iterating over col 
            for(int col=0; col<board[0].size(); col++){
        //checking place is empty or not
                if(board[row][col] == '.'){
                    for(char ch='1'; ch<='9'; ch++){
        //checking that place can accept ch value or not
                        if(isValid(board , row, col, ch)){
                            board[row][col] = ch;
        //after placing number checking for next place in recurrision
                            if(solve(board)==true)
                                return true;
                            else 
                                board[row][col]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    bool isValid(vector<vector<char>> &board, int row, int col, char ch){
        for(int i=0; i<9; i++){
        //ch not available in entire row
            if(board[row][i] == ch)
                return false;
        //ch not available in entire col
            if(board[i][col] == ch)
                return false;
        //ch not available in entire 3*3
            if(board[3 * (row/3) + i/3][3 * (col/3) + i%3] == ch)
                return false;
        }
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);   
    }
};