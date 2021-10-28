class Solution {
public:
    void dfs(vector<vector<int>>& image, int i, int j, int newColor, int old){
        
        //base conditions
        if(i < 0 || j < 0
          || i > image.size() - 1
          || j > image[0].size() - 1
          || image[i][j] != old)
            return;
        
        //define visited cell
        image[i][j] = newColor;
        
        cout<<"image["<<i<<"]["<<j<<"] : "<<image[i][j]<<endl;
        
        //dfs calls
        dfs(image, i - 1, j, newColor, old); //top
        dfs(image, i + 1, j, newColor, old); //bottom
        dfs(image, i, j - 1, newColor, old); //left
        dfs(image, i, j + 1, newColor, old); //right
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int old = image[sr][sc];
        
        if(newColor == old)
            return image;
        
        dfs(image, sr, sc, newColor, old);
        
        return image;
    }
};
