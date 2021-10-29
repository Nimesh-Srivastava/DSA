class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> map1;
        
        for(auto it : strs){
            string word = it;
            sort(word.begin(), word.end());
            map1[word].push_back(it);
        }
        
        vector<vector<string>> result;
        
        for(auto it : map1)
            result.push_back(it.second);
        
        return result;
    }
};
