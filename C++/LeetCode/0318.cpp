class Solution {
public:
    int maxProduct(vector<string>& words) {
        
        unordered_map<int, int> mp; 
        
        for (auto& word : words) {
            
            int mask = 0; 
            
            for (auto& c : word) 
                mask |= 1 << (c - 'a'); 
            
            mp[mask] = max(mp[mask], (int)word.size());
        }
        
        int ans = 0; 
        
        for (auto& x : mp)
            for (auto& y : mp)
                if ((x.first & y.first) == 0)
                    ans = max(ans, x.second * y.second);
                    
        return ans; 
    }
};
