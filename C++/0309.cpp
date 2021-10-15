class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int hold = INT_MIN;
        int sell = 0;
        int cool = 0;
        int prev = 0;
        
        for(int i=0; i<prices.size(); i++){
            
            prev = sell;
            sell = hold + prices[i];
            
            hold = max(hold, cool - prices[i]);
            cool = max(cool, prev);
        }
        
        return max(sell, cool);
    }
};
