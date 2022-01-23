class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        int pos1 = 0;
        
        for(int i = 0; i < s.size(); i++){
            
            if(s[i] == '#'){
                pos1--;
                pos1 = max(pos1, 0);
            }
            else{
                s[pos1] = s[i];
                pos1++;
            }
        }
        
        int pos2 = 0;
        
        for(int i = 0; i < t.size(); i++){
            
            if(t[i] == '#'){
                pos2--;
                pos2 = max(pos2, 0);
            }
            else{
                t[pos2] = t[i];
                pos2++;
            }
        }
        
        if(pos1 != pos2)
            return false;
        
        else
            for(int i = 0; i < pos1; i++)
                if(s[i] != t[i])
                    return false;
        
        return true;
    }
};
