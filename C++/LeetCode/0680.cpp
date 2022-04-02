class Solution {
    bool valid(string s, int i, int j) {
        
        while(i<j) {
            
            if(s[i]!=s[j])
                return false;
            
            i++;
            j--;
        }
        
        return true;
    }
    
public:
    bool validPalindrome(string s) {
        
        int i=0;
        int j=s.size()-1;
        
        while(i<j) {
            
            if(s[i]!=s[j])
                return valid(s, i, j-1) || valid(s, i+1, j);
            
            i++;
            j--;
        }
        
        return true;
        
    }
};
