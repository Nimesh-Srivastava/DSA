class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        
        vector<pair<int, int>> com;
        
        for(int i = 0; i < n; i++)
            com.push_back({efficiency[i], speed[i]});
        
        sort(com.rbegin(), com.rend());
        
        priority_queue<int> pq;
        
        long totalSpeed = 0, best = 0;
        long long int MOD = 1e9 + 7;
        
        for (auto& c : com) {
            int curr_speed = c.second;
            
            pq.push(-curr_speed);
            
            if (pq.size() <= k)
                totalSpeed += curr_speed;
            else {
                totalSpeed += curr_speed + pq.top();
                pq.pop();
            }
            
            best = max(best, totalSpeed * c.first);
        }
        
        return (best % MOD);
    }
};
