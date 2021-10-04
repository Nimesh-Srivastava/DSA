class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int cost = INT_MAX;
        int result = 0;
        
        for(auto c : prices){
            if(c < cost)
                cost = c;
            
            else
                result = max(c - cost, result);
        }
        
        return result;
    }
};
