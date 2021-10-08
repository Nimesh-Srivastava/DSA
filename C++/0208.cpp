//define a new class
class Trienode{
    public:
    bool endval = false;
    vector<Trienode*> child = vector<Trienode*>(26, NULL);
};

class Trie {
    
    Trienode* root = NULL;    //root node
    
public:
    Trie() {
        root = new Trienode;    //constructor
    }
    
    void insert(string word) {
        
        Trienode* temp = root;
        
        for(int i=0; i<word.size(); i++){
            
            int idx = word[i] - 'a';
            
            if(temp->child[idx] == NULL)
                temp->child[idx] = new Trienode;
            
            temp = temp->child[idx];
        }
        
        temp->endval = true;
    }
    
    bool search(string word) {
        
        Trienode* temp = root;
        
        for(int i=0; i<word.size(); i++){
            
            int idx = word[i] - 'a';
            
            temp = temp->child[idx];
            
            if(!temp)
                return false;
        }
        
        return temp->endval;
    }
    
    bool startsWith(string prefix) {
        
        Trienode* temp = root;
        
        for(int i=0; i<prefix.size(); i++){
            
            int idx = prefix[i] - 'a';
            
            temp = temp->child[idx];
            
            if(!temp)
                return false;
        }
        
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
