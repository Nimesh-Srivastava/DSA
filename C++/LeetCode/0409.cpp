class Solution {
public:
    int longestPalindrome(string s) {
        
        unordered_map<char, int> map1;
        
        for(auto c : s)
            map1[c]++;
        
        int count = 0;
        
        for(auto it = map1.begin(); it != map1.end(); it++)
            if(it -> second > 1)
                count += (it -> second) / 2;
        
        count *= 2;
        
        if(s.length() > count)
            count++;
        
        return count;
    }
};
