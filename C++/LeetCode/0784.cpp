class Solution {
    
    vector<string> casePerms;
    
public:
    void backtrack(string& s, int pos, string ans){
        
        if(pos == s.length()){
            casePerms.push_back(ans);
            return;
        }
        
        char ch = s[pos];
        
        if(isdigit(ch))
            backtrack(s, pos + 1, ans + ch);
        
        else{
            char temp = isupper(ch) ? tolower(ch) : toupper(ch);
            backtrack(s, pos + 1, ans + ch);
            backtrack(s, pos + 1, ans + temp);
        }
    }
    
    vector<string> letterCasePermutation(string s) {
        string temp;
        temp.clear();
        
        backtrack(s, 0, temp);
        
        return casePerms;
    }
};
