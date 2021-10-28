class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length() != t.length())
            return false;
        
        unordered_map<char, int> map1;
        
        for(auto c : s)
            map1[c]++;
        
        for(auto c : t)
            map1[c]--;
        
        for(auto c : map1)
            if(c.second != 0)
                return false;
        
        return true;
    }
};
