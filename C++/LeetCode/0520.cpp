class Solution {
public:
    bool detectCapitalUse(string word) {
        
        bool allCaps = true;
        bool allSmall = true;
        
        bool firstCap = isupper(word[0]);
        
        for(int i = 1; i < word.size(); i++){
            if(isupper(word[i]))
                allSmall = false;
            
            else
                allCaps = false;
        }
        
        return (firstCap && allCaps) || allSmall;
    }
};
