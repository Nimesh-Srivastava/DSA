class Solution {
public:
    string removeOuterParentheses(string s) {
        
        stack<char> s1;
        vector<int> points;
        
        // loop to find endpoints of valid parantheses strings
        for(int i=0; i<s.size(); i++){
            
            if(s[i] == '('){
                
                if(s1.empty())
                    points.push_back(i);
                
                s1.push(s[i]);
            }
            
            else if(s[i] == ')'){
                s1.pop();
                
                if(s1.empty())
                    points.push_back(i);
            }
        }
        
        string result;
        
        for(int i=0; i<points.size(); i += 2)
            result += s.substr(points[i] + 1, points[i + 1] - points[i] - 1);
        
        return result;
    }
};
