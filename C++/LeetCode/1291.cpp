class Solution {
    
    vector<int> result;
    
public:
    void dfs(int l, int h, int i, int temp){
        
        if(l <= temp && temp <= h)
            result.push_back(temp);
        
        if(temp > h || i > 9)
            return;
        
        dfs(l, h, i + 1, temp * 10 + i);
    }
    
    vector<int> sequentialDigits(int low, int high) {
        
        for(int i = 1; i <= 9; i++)
            dfs(low, high, i, 0);
        
        sort(result.begin(), result.end());
        
        return result;
    }
};
