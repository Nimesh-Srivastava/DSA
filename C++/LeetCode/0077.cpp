class Solution {
    
    vector<vector<int>> result;
    
public:
    void backtrack(vector<int>& temp, int pos, int n, int k){
        
        if(temp.size() == k){
            result.push_back(temp);
            return ;
        }
        
        for(int i = pos; i <= n; i++){
            temp.push_back(i);
            
            backtrack(temp, i + 1, n, k);
            
            temp.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        
        vector<int> temp;
        
        backtrack(temp, 1, n, k);
        
        return result;
    }
};
