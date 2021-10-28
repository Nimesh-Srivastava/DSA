class Solution {
public:
    string reverseWords(string s) {
        
        string result;
        string word;
        
        int siz = s.length();
        int i = 0;
        
        while(i < siz){
            
            while(i < siz && s[i] == ' ')
                i++;
            
            if(i >= siz)
                break;
            
            int j = i + 1;
            
            while(j < siz && s[j] != ' ')
                j++;
            
            word = s.substr(i, j - i);
            
            if(result.length() == 0)
                result = word;
            else
                result = word + " " + result;
            
            i = j + 1;
        }
        
        return result;
    }
};
