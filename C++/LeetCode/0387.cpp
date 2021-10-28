class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char, int> map1;
        
        for(auto& c : s)
            map1[c]++;
        
        for(int i=0; i<s.length(); i++){
            if(map1[s[i]] == 1)
                return i;
        }
        
        return -1;
    }
};
