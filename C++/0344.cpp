class Solution {
public:
    void swapChar(char& a, char& b){
        char temp = a;
        a = b;
        b = temp;
    }
    
    void reverseString(vector<char>& s) {
        
        int i = 0;
        int j = s.size() - 1;
        
        while(i < j){
            swapChar(s[i], s[j]);
            i++;
            j--;
        }
    }
};
