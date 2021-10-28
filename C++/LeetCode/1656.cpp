class OrderedStream {
public:
    vector<string> stream;
    
    int i;
    int lim;
    
    OrderedStream(int n) {
        i = 0;
        lim = n;
        stream.resize(n);
    }
    
    vector<string> insert(int idKey, string value) {
        stream[idKey-1] = value;
        vector<string> out;
        
        while(stream[i] != "" && i != lim) out.push_back(stream[i++]);
        
        return out;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
