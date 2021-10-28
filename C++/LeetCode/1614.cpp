class Solution {
public:
    int maxDepth(string s) {
        
        stack<int> s1;
        int count = 0;
        int max_count = 0;
        
        for(int i=0; i<s.size(); i++){
            
            if(s[i] == '('){
                s1.push(s[i]);
                count++;
            }
            
            else if(s[i] == ')'){
                
                if(s1.top() == '('){
                    max_count = max(max_count, count);
                    s1.pop();
                    count--;
                }
            }
        }
        
        return max_count;
    }
};
