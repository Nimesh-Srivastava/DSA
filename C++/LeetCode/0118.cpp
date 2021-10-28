class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> result;
        
        for(int i=0; i<numRows; i++){
            
            vector<int> value;
            
            for(int j=0; j<=i; j++){
                
                if(i == j || j == 0)
                    value.push_back(1);
                
                else
                    value.push_back(result[i-1][j-1] + result[i-1][j]);
            }
            
            result.push_back(value);
        }
        
        return result;
    }
};
