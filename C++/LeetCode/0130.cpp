class Solution {
public:
    void dfs(vector<vector<char>>& board, int i, int j, char c){
        
        //base conditions
        if(i < 0 || j < 0
          || i >= board.size()
          || j >= board[0].size()
          || board[i][j] != 'O')
            return;
        
        //update character value
        board[i][j] = c;
        
        //dfs calls for surroundings
        dfs(board, i - 1, j, c);
        dfs(board, i + 1, j, c);
        dfs(board, i, j - 1, c);
        dfs(board, i, j + 1, c);
    }
    
    void solve(vector<vector<char>>& board) {
        
        int row = board.size();
        int col = board[0].size();
        
        //change 'O' connected to border to '!'
        for(int i = 0; i < row; i++){
            if(board[i][0] == 'O')
                dfs(board, i, 0, '!');
            
            if(board[i][col - 1] == 'O')
                dfs(board, i, col - 1, '!');
        }
        
        for(int i = 0; i < col; i++){
            if(board[0][i] == 'O')
                dfs(board, 0, i, '!');
            
            if(board[row - 1][i] == 'O')
                dfs(board, row - 1, i, '!');
        }
        
        //change remainig Os to Xs
        for(int i = 1; i < row - 1; i++)
            for(int j = 1; j < col - 1; j++)
                if(board[i][j] == 'O')
                    board[i][j] = 'X';
        
        //revert border '!'s back to 'O's
        for(int i = 0; i < row; i++)
            for(int j = 0; j < col; j++)
                if(board[i][j] == '!')
                    board[i][j] = 'O';
    }
};
