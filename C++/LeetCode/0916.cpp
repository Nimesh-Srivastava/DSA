class Solution {
public:
    vector<int> getFreq(string& word) {
        // vector acting like a map, a -> 0, b -> 1, c -> 2 ...
        vector<int> freq(26);
        
        for(auto& c : word) {
            freq[c - 'a']++;
        }
        
        return freq;
    }
    
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        
        vector<int> reqFreq(26);
        vector<int> freq;
        
        for(auto& word : words2) {
            freq.clear();
            freq = getFreq(word);
            
            // freq can increase for multiple words in words2
            for(int i = 0; i < 26; i++)
                reqFreq[i] = max(reqFreq[i], freq[i]);
        }
        
        vector<string> ans;
        
        for(auto& word : words1) {
            freq.clear();
            freq = getFreq(word);
            
            int i = 0;
            
            for(i = 0; i < 26; i++)
                if (freq[i] < reqFreq[i])
                    break;
            
            if (i == 26)
                ans.push_back(word);
        }
        
        return ans;
    }
};
