class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        queue<pair<int, int>>q;
        
        int m = mat.size();
        int n = mat[0].size();
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] == 0){
                    mat[i][j] = 2;
                    q.push({i, j});
                }
            }
        }
        
        while(!q.empty()){
            
            int row = q.front().first;
            int col = q.front().second;
            
            q.pop();
            
            if(row + 1 < m && mat[row + 1][col] == 1){
                mat[row + 1][col] = mat[row][col] + 1;
                q.push({row + 1, col});
            }
            if(row - 1 >= 0 && mat[row - 1][col] == 1){
                mat[row - 1][col] = mat[row][col] + 1;
                q.push({row - 1, col});
            }
            if(col + 1 < n && mat[row][col + 1] == 1){
                mat[row][col + 1] = mat[row][col] + 1;
                q.push({row, col + 1});
            }
            if(col - 1 >= 0 && mat[row][col - 1] == 1){
                mat[row][col - 1] = mat[row][col] + 1;
                q.push({row, col - 1});
            }
        }
        
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                mat[i][j] -= 2;
        
        return mat;
    }
};
