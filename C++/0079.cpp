//Solution 1 :
class Solution {
public:
    bool dfs(vector<vector<char>>& board, int i, int j, 
             string& word, int idx, vector<vector<bool>>& visited){
        
        if(idx == word.length() - 1)
            return true;
        
        visited[i][j] = true;
        
        //top neighbour
        if(i > 0 && !visited[i - 1][j] 
          && board[i - 1][j] == word[idx + 1] 
          && dfs(board, i - 1, j, word, idx + 1, visited))
            return true;
        
        //bottom neighbour
        if(i < board.size() - 1 && !visited[i + 1][j] 
          && board[i + 1][j] == word[idx + 1] 
          && dfs(board, i + 1, j, word, idx + 1, visited))
            return true;
        
        //left neighbour
        if(j > 0 && !visited[i][j - 1] 
          && board[i][j - 1] == word[idx + 1] 
          && dfs(board, i, j - 1, word, idx + 1, visited))
            return true;
        
        //right neighbour
        if(j < board[0].size() && !visited[i][j + 1] 
          && board[i][j + 1] == word[idx + 1] 
          && dfs(board, i, j + 1, word, idx + 1, visited))
            return true;
        
        visited[i][j] = false;
        
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        
        int row = board.size();
        int col = board[0].size();
        
        vector<vector<bool>> visited(row, vector<bool>(col, false));
        
        for(int i=0; i<row; i++)
            for(int j=0; j<col; j++)
                if(board[i][j] == word[0] && dfs(board, i, j, word, 0, visited))
                    return true;
        
        return false;
    }
};


//Solution 2 (Optimized for space) :
class Solution {
public:
    bool dfs(vector<vector<char>>& board, int i, int j, 
             string& word, int idx){
        
        if(idx == word.length() - 1)
            return true;
        
        board[i][j] -= 65;
        
        //top neighbour
        if(i > 0 && board[i - 1][j] == word[idx + 1] 
          && dfs(board, i - 1, j, word, idx + 1))
            return true;
        
        //bottom neighbour
        if(i < board.size() - 1 && board[i + 1][j] == word[idx + 1] 
          && dfs(board, i + 1, j, word, idx + 1))
            return true;
        
        //left neighbour
        if(j > 0 && board[i][j - 1] == word[idx + 1] 
          && dfs(board, i, j - 1, word, idx + 1))
            return true;
        
        //right neighbour
        if(j < board[0].size() - 1 && board[i][j + 1] == word[idx + 1] 
          && dfs(board, i, j + 1, word, idx + 1))
            return true;
        
        board[i][j] += 65;
        
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        
        int row = board.size();
        int col = board[0].size();
        
        for(int i=0; i<row; i++)
            for(int j=0; j<col; j++)
                if(board[i][j] == word[0] && dfs(board, i, j, word, 0))
                    return true;
        
        return false;
    }
};
