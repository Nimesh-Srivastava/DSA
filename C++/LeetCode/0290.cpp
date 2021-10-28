class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        unordered_map<char, string> match;
        
        int i = 0;
        int j = 0;
        
        while(i < pattern.size() && j < s.size()){
            
            string word = "";
            
            while(j < s.size() && s[j] != ' '){
                word += s[j++];
            }
            
            if(match.count(pattern[i])){
                if(match[pattern[i]] != word)
                    return false;
            }
            
            else{
                for(auto m : match)
                    if(m.second == word)
                        return false;
                
                match[pattern[i]] = word;
            }
            i++;
            j++;
        }
        
        return i == pattern.size() && j == s.size() + 1;
    }
};
