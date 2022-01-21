class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int gasSum = accumulate(gas.begin(), gas.end(), 0);
        int costSum = accumulate(cost.begin(), cost.end(), 0);
        
        if(gasSum < costSum)
            return -1;
        
        int sum = 0;
        int idx = 0;
        
        for(int i = 0; i < gas.size(); i++){
            
            if(sum < 0){
                idx = i;
                sum = 0;
            }
            
            sum += gas[i] - cost[i];
        }
        
        return idx;
    }
};
