class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(!matrix.size())
            return 0;
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int result = 0;
        
        for(int i = 0; i < row; i++)
            for(int j = 0; j < col; j++)
                for(int r = i, col_len = col, c; r < row && matrix[r][j] == '1'; r++){
                    
                    for(c = j; c < col && matrix[r][c] == '1'; c++);
                    
                    col_len = min(col_len, c - j);
                    
                    result = max(result, (r - i + 1) * col_len);
                }
        
        return result;
    }
};
