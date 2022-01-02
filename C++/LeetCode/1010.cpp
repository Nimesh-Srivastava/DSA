class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        
        vector<int> vec(60);
        
        int result = 0;
        
        for(auto& t : time){
            
            result += vec[(600 - t) % 60];
            
            vec[t % 60] += 1;
        }
        
        return result;
    }
};
