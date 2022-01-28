class WordDictionary {
    
    bool endOfWord;
    vector<WordDictionary*> child;
    
public:
    WordDictionary() : endOfWord(false) {
        child = vector<WordDictionary*>(26, NULL);
    }
    
    void addWord(string word) {
        
        WordDictionary* curr = this;
        
        for(auto& c : word){
            if(curr -> child[c - 'a'] == NULL)
                curr -> child[c - 'a'] = new WordDictionary;
            
            curr = curr -> child[c - 'a'];
        }
        curr -> endOfWord = true;
    }
    
    bool search(string word) {
        
        WordDictionary* curr = this;
        
        for(int i = 0; i < word.length(); i++){
            
            char c = word[i];
            
            if(c == '.'){
                
                for(auto& ch : curr -> child)
                    if(ch && ch -> search(word.substr(i + 1)))
                        return true;
                
                return false;
            }
            
            if(curr -> child[c - 'a'] == NULL)
                return false;
            
            curr = curr -> child[c - 'a'];
        }
        
        return curr && curr -> endOfWord;
    }
};
