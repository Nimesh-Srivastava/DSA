class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> result;
        
        sort(intervals.begin(), intervals.end());
        
        vector<int> node = intervals[0];
        
        int start = 0;
        int end = 1;
        
        for(auto elem : intervals){
            
            if(elem[start] <= node[end])
                node[end] = max(node[end], elem[end]);
            
            else{
                result.push_back(node);
                node = elem;
            }
        }
        
        result.push_back(node);
        
        return result;
    }
};
