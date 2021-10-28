class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int hold = INT_MIN;
        int sell = 0;
        int cool = 0;
        int prev = 0;
        
        for(auto c : prices){
            
            prev = sell;
            sell = hold + c;
            
            hold = max(hold, cool - c);
            cool = max(cool, prev);
        }
        
        return max(sell, cool);
    }
};
