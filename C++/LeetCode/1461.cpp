class Solution {
public:
    bool hasAllCodes(string s, int k) {
        
        unordered_map<string, bool> mp;
        
        int siz = s.length();
        
        for(int i = 0; i < siz - k + 1; i++)
            mp[s.substr(i,k)] = true;
        
        return mp.size() == 1 << k;
    }
};
