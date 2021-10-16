//Solution 1
//T : O(n), S : O(n)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int siz = prices.size();
        
        if(siz < 2)
            return 0;
        
        int p1 = prices[0];
        int p2 = prices[siz - 1];
        
        vector<int> pr1(siz, 0);
        vector<int> pr2(siz, 0);
        
        for(int i=1; i<siz; i++){
            
            pr1[i] = max(pr1[i - 1], prices[i] - p1);
            p1 = min(p1, prices[i]);
            
            int j = siz - 1 - i;
            pr2[j] = max(pr2[j + 1], p2 - prices[j]);
            p2 = max(p2, prices[j]);
        }
        
        int result = 0;
        
        for(int i=0; i<siz; i++)
            result = max(result, pr1[i] + pr2[i]);
        
        return result;
    }
};


//Solution 2
//T : O(n), S : O(1)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        if(prices.size() < 2)
            return 0;
        
        int min_p1 = INT_MAX;
        int min_p2 = INT_MAX;
        
        int max_pr1 = 0;
        int max_pr2 = 0;
        
        for(auto c : prices){
            
            min_p1 = min(min_p1, c);
            max_pr1 = max(max_pr1, c - min_p1);
            
            min_p2 = min(min_p2, c - max_pr1);
            max_pr2 = max(max_pr2, c - min_p2);
        }
        
        return max_pr2;
    }
};
