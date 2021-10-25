class Solution {
public:
    string reverseWords(string s) {
        
        string result;
        result.clear();
        
        vector<char> word;
        
        int count = 0;
        
        while(count < s.length()){
            
            if(s[count] != ' '){
                word.push_back(s[count]);
                count++;
                if(count != s.length())
                    continue;
            }
            
            reverse(word.begin(), word.end());
                
            result.append(word.begin(), word.end());
            
            if(count != s.length()){
                result.append(" ");
                word.clear();
                count++;
            }
        }
        
        return result;
    }
};
