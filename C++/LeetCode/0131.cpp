class Solution {
public:
    
    bool palin(string str){
        
        int l = 0;
        int r = str.size() - 1;
        
        while(l < r){
            
            if(str[l] != str[r])
                return false;
            
            l++;
            r--;
        }
        
        return true;
    }
    
    void backtrack(string& s, vector<vector<string>>& result, vector<string>& vec){
        
        if(s.size() == 0){
            result.push_back(vec);
            
            return;
        }
        
        for(int i = 0; i < s.size(); i++){
            
            string s1 = s.substr(0, i + 1);
            string s2 = s.substr(i + 1);
            
            if(palin(s1)){
                vec.push_back(s1);
                backtrack(s2, result, vec);
                vec.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        
        vector<vector<string>> result;
        vector<string> vec;
        
        backtrack(s, result, vec);
        
        return result;
    }
};
