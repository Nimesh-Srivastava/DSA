class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        
        long long result = 0;
        
        for(int i=shifts.size()-1; i>= 0; i--){
            
            s[i] = ((s[i] - 'a') + (result + shifts[i] % 26)) % 26 + 'a';
            
            result = result + shifts[i];
        }
        return s;
    }
};
