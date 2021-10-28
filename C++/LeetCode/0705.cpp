class MyHashSet {
public:
    
    vector<int> shit;
    
    /** Initialize your data structure here. */
    MyHashSet() {
        
    }
    
    void add(int key) {
        
        if(find(shit.begin(), shit.end(), key) == shit.end())
            shit.push_back(key);
        
    }
    
    void remove(int key) {
        
        if(count(shit.begin(), shit.end(), key) > 0){
            
            int temp = find(shit.begin(), shit.end(), key) - shit.begin();
            
            shit.erase(shit.begin() + temp);
            
        }
        
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return find(shit.begin(), shit.end(), key) != shit.end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
