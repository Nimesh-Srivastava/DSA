class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char, int> map1;
        
        for(auto c : magazine)
            map1[c]++;
        
        for(int i=0; i<ransomNote.length(); i++){
            
            if(map1[ransomNote[i]] > 0)
                map1[ransomNote[i]]--;
            
            else
                return false;
        }
        
        return true;
    }
};
