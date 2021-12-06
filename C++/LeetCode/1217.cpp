class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int odd = 0;
        int even = 0;
        
        for(int& p : position)
            p % 2 == 0 ? even++ : odd++;
        
        return min(even, odd);
    }
};
