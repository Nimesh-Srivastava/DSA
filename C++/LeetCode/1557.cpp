class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
     
        vector<int> v(n, 0);
        
        for(auto& e : edges)
            v[e[1]]++;
        
        vector<int> result;
        
        for(int i = 0; i < n; i++)
            if(v[i] == 0)
                result.push_back(i);
        
        return result;
    }
};
