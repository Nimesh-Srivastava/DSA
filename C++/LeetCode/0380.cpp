class RandomizedSet {
    
    unordered_set<int> s;
    
public:
    RandomizedSet() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
    }
    
    bool insert(int val) {
        
        if(s.count(val) != 0)
            return false;
        
        s.insert(val);
        
        return true;
    }
    
    bool remove(int val) {
        
        if(s.count(val) == 0)
            return false;
        
        s.erase(val);
        
        return true;
    }
    
    int getRandom() {
        
        auto it = s.begin();
        
        int place = rand() % s.size();
        advance(it, place);
        
        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
