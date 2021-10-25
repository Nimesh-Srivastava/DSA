bool sortEnd(vector<int>& a, vector<int>& b){
        return a[1] < b[1];
}

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        int count = 0;
        
        sort(intervals.begin(), intervals.end(), sortEnd);
        
        vector<int> node = intervals[0];
        
        for(auto elem : intervals){
            
            if(node[1] > elem[0])
                count++;
            
            else
                node = elem;
        }
        
        count--;
        
        return count;
    }
};
