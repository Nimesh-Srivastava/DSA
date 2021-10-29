class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        
        int minCost = INT_MAX;
        int maxProf = 0;
        
        for(auto c : prices){
            minCost = min(minCost, c - maxProf);
            maxProf = max(maxProf, c - minCost - fee);
        }
        
        return maxProf;
    }
};
