class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> map1;
        
        for(auto c : s)
            map1[c]++;
        
        unordered_map<char,int> map2;
        
        int temp = 0; 
        
        vector<int> result;
        
        for(int i = 0; i < s.size(); i++){
            char ch = s[i];
            
            temp++;
            
            map2[ch] = 1;
            map1[ch]--;
            
            if(map1[ch] == 0)
                map2.erase(ch);
            
            if(map2.size() == 0){
                result.push_back(temp);
                temp = 0;
            }
        }
        return result;
    }
};
