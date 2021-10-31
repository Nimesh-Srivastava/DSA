class Solution {
public:
    int numDecodings(string s) {
        
        if(s[0] == '0')
            return 0;
        
        int point1 = 0;
        int point2 = 0;
        
        int ch = 1;
        
        for(int i = s.length() - 1; i >= 0; i--){
            point2 = point1;
            point1 = ch;
            ch = 0;
            
            if(s[i] != '0')
                ch = point1;
            
            if(i < s.length() - 1){
                int letter = (s[i] - '0') * 10 + s[i + 1] - '0';
                
                if(letter >= 10 && letter <= 26)
                    ch += point2;
            }
        }
        
        return ch;
    }
};
