class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        
        vector<int> stops(1001);
        
        for(auto& t : trips){
            stops[t[1]] += t[0];
            stops[t[2]] -= t[0];
        }
        
        for(int i = 0; i < 1001 && capacity >= 0; i++)
            capacity -= stops[i];
        
        return capacity >= 0;
    }
};
