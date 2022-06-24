class Solution {
public:
    bool isPossible(vector<int>& target) {
        
        long sum = 0;
        for(auto& t : target)
            sum += t;
        
        priority_queue<int> pq(target.begin(), target.end());
        
        int temp;
        while(true) {
            temp = pq.top();
            pq.pop();
            sum -= temp;
            
            if(temp == 1 || sum == 1)
                return true;
            
            if(temp < sum || sum == 0 || temp % sum == 0)
                return false;
            
            temp %= sum;
            sum += temp;
            pq.push(temp);
        }
        
    }
};
