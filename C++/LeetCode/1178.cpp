class Solution {
public:
    int maskWord(string word){
        int mask = 0;
        
        for(auto& w : word)
            mask |= (1 << (w-'a'));
        
        return mask;
    }
    
    vector<int> findNumOfValidWords(vector<string>& words, vector<string>& puzzles) {
        
        unordered_map<int, int> freq;
        
        for(auto& w : words)
            freq[maskWord(w)]++;
        
        vector<int> result;
        
        for(auto& p : puzzles){
            int mask = maskWord(p);
            int submask = mask;
            int first = 1 << (p[0]-'a');
            int curr = 0;
            
            while(submask){
                if(submask & first)
                    curr += freq[submask];
                
                submask = (submask - 1) & mask;
            }
            
            result.push_back(curr);
        }
        
        return result;
    }
};
