class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // * Check row validity
        for(int r = 0; r < board.size(); r++){
            map<char, int> m;
            for(int c = 0; c < board.size(); c++){
                if(board[r][c]!='.'){
                    m[board[r][c]] += 1;
                }
            }
            for(auto it: m){
                if(it.second > 1){
                    return false;
                }
            }
        }
        //* Check column validity
        for(int r = 0; r < board.size(); r++){
            map<char, int>  m;
            for(int c = 0; c < board.size(); c++){
                if(board[c][r]!='.'){
                    m[board[c][r]] += 1;
                }
            }
            for(auto it: m){
                if(it.second > 1){
                    return false;
                }
            }
        }
        //* Check 3x3 matrix validity
        for(int i = 0; i < 9; i += 3){
            for(int j = 0; j < 9; j += 3){
                map<char, int> m;
                for(int k = 0; k < 3; k++){
                    for(int l = 0; l < 3; l++){
                        if(board[i+k][j+l] != '.'){
                            m[board[i+k][j+l]] += 1;
                        }
                    }
                }
                for(auto it: m){
                    if(it.second > 1){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};