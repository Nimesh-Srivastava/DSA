class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        unordered_map<char, int> map1;
        
        for(auto& c : p)
            map1[c]++;
        
        int cnt = map1.size();
        int winSize = p.size();
        
        int i = 0, j = 0;
        
        vector<int> result;
        
        while(j < s.size()){
            
            if(map1.find(s[j]) != map1.end()){
                map1[s[j]]--;
                
                if(map1[s[j]] == 0)
                    cnt--;
            }
            
            if(j - i + 1 < winSize)
                j++;
            
            else if(j - i + 1 == winSize){
                
                if(cnt == 0)
                    result.push_back(i);
                
                if(map1.find(s[i]) != map1.end()){
                    map1[s[i]]++;
                    
                    if(map1[s[i]] == 1)
                        cnt++;
                }
                
                i++;
                j++;
            }
        }
        
        return result;
    }
};
