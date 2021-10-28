class Solution {
public:
    string truncateSentence(string s, int k) {
        
        int count = 0;
        string result;
        
        for(int i=0; i<s.size(); i++){
            
            if(s[i] == ' ')
                count++;
            
            if(count == k && s[i] == ' ')
                break;
            
            result.push_back(s[i]);
        }
        
        return result;
    }
};
