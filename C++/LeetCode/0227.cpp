class Solution {
public:
    int calculate(string s) {
        
        stack<int> result;
        char opr = '+';
        int temp = 0;
        
        for(int i = 0; i < s.size(); i++){
            
            if(isdigit(s[i]))
                temp = (temp * 10) + (s[i] - '0');
            
            if(i == s.size()-1 || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
                
                if(opr == '+')
                    result.push(temp);
                
                else if(opr == '-')
                    result.push(-temp);
                
                else if(opr == '*'){
                    temp *= result.top();
                    result.pop();
                    result.push(temp);
                }
                
                else if(opr == '/'){
                    temp = result.top() / temp;
                    result.pop();
                    result.push(temp);
                }
                
                opr = s[i];
                temp = 0;
            }
        }
        
        int ans = 0;
        
        while(!result.empty()){
            ans += result.top();
            result.pop();
        }
        
        return ans;
    }
};
