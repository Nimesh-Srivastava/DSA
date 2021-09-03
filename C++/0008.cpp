class Solution {
public:
    int myAtoi(string s) {
        
        int len = s.length();
        int i = 0;
        
        if(len == 0)
            return 0;
        
        for(i = 0; i < len && s[i] == ' '; i++);
        
        if(i == len)
            return 0;
        
        int sin = 1;
        
        if(s[i] == '-'){
            sin = -1;
            i = i + 1;
        }
        else if(s[i] == '+'){
            i = i + 1;
        }
        
        long ans = 0;
        
        while(i < len && ans < INT_MAX && isdigit(s[i])){
            ans = ans * 10 + (s[i] - '0');
            i = i + 1;
        }
        
        if(ans > INT_MAX){
            if(sin == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }
        
        return ans * sin;
    }
};
