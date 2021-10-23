class MyHashMap {
    
    vector<pair<int, int>> map;
    
public:
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        
        if(get(key) != -1)
            remove(key);
        
        map.push_back(make_pair(key, value));
    }
    
    int get(int key) {
        
        for(auto c : map)
            if(c.first == key)
                return c.second;
        
        return -1;
    }
    
    void remove(int key) {
        
        if(get(key) != -1){
            
            auto it = map.begin();
            
            while(true){
                if(it -> first == key){
                    map.erase(it);
                    break;
                }
                it++;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
