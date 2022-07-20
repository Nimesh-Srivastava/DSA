class Solution {
    
    bool isSubSeq(string s1, string s2, int m, int n) {
        
        int cnt = 0;
        
        for(int i = 0; i < m && cnt < n; i++) {
            if (s1[i] == s2[cnt])
                cnt++;
        }
        
        if (cnt == n)
            return true;
        else
            return false;
    }
    
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        
        int cnt = 0;
        unordered_map<string, bool> m1;
        
        for(auto& word : words) {
            
            if (m1.find(word) != m1.end()) {
                if (m1[word] == true)
                    cnt++;
                
                continue;
            }
            
            m1[word] = isSubSeq(s, word, s.size(), word.size());
            
            if (m1[word])
                cnt += 1;
        }
        
        return cnt;
    }
};
