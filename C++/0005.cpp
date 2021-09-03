class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length() <= 1)
            return s;
        
        int max_len = 1, st = 0, end = 0;
        int siz = s.length();
        
        for(int i=0; i<siz-1; i++){
            cal(i, i, siz, max_len, st, end, s);
        }
        
        for(int i=0; i<siz-1; i++){
            cal(i, i+1, siz, max_len, st, end, s);
        }
        return s.substr(st, max_len);
    }
    
    //solved using recursion, not the best way probably
    void cal(int l, int r, int siz, int &max_len, int &st, int &end, string s){
        while(l >= 0 && r < siz){
            if(s[l] == s[r]){
                    l--;
                    r++;
            }
            else
                break;
        }
            
        int len = r - l - 1;
            
        if(len > max_len){
            max_len = len;
            st = l + 1;
            end = r - 1;
        }
    }
    
};
