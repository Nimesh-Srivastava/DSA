class Solution {
    
    bool checkCell(vector<vector<char>>& board, int row, int col, int i, char c){
        char cal = board[3 * (row / 3) + (i / 3)][3 * (col / 3) + (i % 3)];
        
        if(cal == c)
            return false;
        
        return true;
    }
    
    bool valid(char c, vector<vector<char>>& board, int row, int col){
        for(int i = 0; i < 9; i++){
            
            if(board[i][col] == c)
                return false;
            
            if(board[row][i] == c)
                return false;
            
            if(!checkCell(board, row, col, i, c))
                return false;
        }
        return true;
    }
    
    bool solve(vector<vector<char>>& board){
        
        int m = board.size();
        int n = board[0].size();
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                
                if(board[i][j] == '.'){
                    for(char c = '1'; c <= '9'; c++){
                        
                        if(valid(c, board, i, j)){
                            board[i][j] = c;
                            
                            if(solve(board))
                                return true;
                            else
                                board[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
