class Solution {
public:
    vector<string>result;
    
    void backtrack(int open, int close, int n, string current) {
        
        if(current.size() == n * 2) {
            result.push_back(current);
            return;
        }
        
        if(open < n)
            backtrack(open + 1, close, n, current + "(");
        
        if(close < open)
            backtrack(open, close + 1, n, current + ")");
    }
    
    vector<string> generateParenthesis(int n) {
        
        backtrack(0, 0, n, "");
        
        return result;
    }
};
