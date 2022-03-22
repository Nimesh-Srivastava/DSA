class Solution {
public:
    double average(vector<int>& salary) {
        
        int minEl = INT_MAX;
        int maxEl = INT_MIN;
        
        int cnt = 0;
        
        for(auto s : salary){
            
            minEl = min(minEl, s);
            maxEl = max(maxEl, s);
            
            cnt += s;
        }
        
        double result = (cnt - maxEl - minEl) * 1.0 / (salary.size() - 2);
        
        return result;
    }
};
