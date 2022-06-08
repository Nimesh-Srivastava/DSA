class Solution {
public:
    int removePalindromeSub(string s) {
        if (s.empty())
            return 0;
        
        else if (s.compare(string(s.rbegin(), s.rend())) == 0)
            return 1;
        
        else
            return 2;
    }
};
