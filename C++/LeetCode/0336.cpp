struct TrieNode {
    TrieNode* next[26] = {};
    int index = -1;
    vector<int> indices;
};

class Solution {
    
    TrieNode root;
    
    bool isPalin(string& s, int i, int j) {
        while(i < j && s[i] == s[j])
            i++, j--;
        
        return i >= j;
    }
    
    void add(string& s, int i) {
        auto node = &root;
        
        for(int j = s.size() - 1; j >= 0; j--) {
            if (isPalin(s, 0, j))
                node -> indices.push_back(i);
            
            int c = s[j] - 'a';
            if (!node -> next[c])
                node -> next[c] = new TrieNode();
            
            node = node -> next[c];
        }
        
        node -> index = i;
        node -> indices.push_back(i);
    }
    
public:
    vector<vector<int>> palindromePairs(vector<string>& words) {
        
        int siz = words.size();
        
        for(int i = 0; i < siz; i++)
            add(words[i], i);
        
        vector<vector<int>> res;
        
        for(int i = 0; i < siz; i++) {
            auto w = words[i];
            auto node = &root;
            
            for(int j = 0; j < w.size() && node; j++) {
                if (node -> index != -1 && node -> index != i && isPalin(w, j, w.size() - 1))
                    res.push_back({i, node -> index});
                
                node = node -> next[w[j] - 'a'];
            }
            
            if (!node)
                continue;
            
            for(auto& idx : node -> indices)
                if (i != idx)
                    res.push_back({i, idx});
        }
        
        return res;
    }
};
