class Solution {
    
    vector<vector<string>> ans;
    
public:
    bool isValid(vector<string>& board, int row, int col){
        
        //column checking
        for(int i = row; i >= 0; i--)
            if(board[i][col] == 'Q')
                return false;
        
        //left diagonal
        for(int i = row, j = col; i >= 0 && j >= 0; i--, j--)
            if(board[i][j] == 'Q')
                return false;
        
        //right diagonal
        for(int i = row, j = col; i >= 0 && j < board.size(); i--, j++)
            if(board[i][j] == 'Q')
                return false;
        
        return true;
    }
    
    void dfs(vector<string>& board, int row){
        if(row == board.size()){
            ans.push_back(board);
            return;
        }
        
        for(int i = 0; i < board.size(); i++){
            if(isValid(board, row, i)){
                
                board[row][i] = 'Q';
                
                dfs(board, row + 1);
                
                board[row][i] = '.';    //bactracking
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        if(n < 1)
            return ans;
        
        vector<string> board(n, string(n, '.'));
        
        dfs(board, 0);
        
        return ans;
    }
};
