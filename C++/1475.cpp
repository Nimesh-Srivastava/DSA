// logic : 
// We iterate in reverse order
// If stack.top() > prices[i], we pop the stack
// If it is lower, we subtract it from price and push the price to stack

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        stack<int> s1;
        int price = 0;
        
        s1.push(0);     // default discount = 0
        
        for(int i = prices.size() - 1; i >= 0; i--){
            
            while(!s1.empty() && s1.top() > prices[i])
                s1.pop();
            
            price = prices[i];
            
            prices[i] -= s1.top();
            
            s1.push(price);
        }
        
        return prices;
    }
};
