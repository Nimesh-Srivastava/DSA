class Solution {
public:
    static bool comp(vector<int>& a, vector<int>& b) {
        return a[1] > b[1];
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
     
        sort(begin(boxTypes), end(boxTypes), comp);
        
        int maxVal = 0;
        
        for(auto& box : boxTypes) {
            
            if(truckSize <= 0)
                break;
            
            maxVal += min(truckSize, box[0]) * box[1];
            truckSize -= box[0];
        }
        return maxVal;
    }
};
