class Solution {
public:
    string getWord(string word) {
        unordered_map<char, char> m1;
        
        char curr = 'a';
        
        for(auto& w : word)
            if (!m1[w])
                m1[w] = curr++;
        
        for(int i = 0; i < word.size(); i++)
            word[i] = m1[word[i]];
        
        return word;
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        vector<string> ans;
        
        string pat = getWord(pattern);
        
        for(int i = 0; i < words.size(); i++) {
            string temp = getWord(words[i]);
            
            if (temp == pat)
                ans.push_back(words[i]);
        }
        
        return ans;    
    }
};
