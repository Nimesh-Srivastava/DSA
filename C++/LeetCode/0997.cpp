class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size() == 0){
            if(n == 1)
                return 1;
            
            else
                return -1;
        }
        
        vector<int> v(n + 1, 0);
        
        for(auto& t : trust){
            v[t[0]]--;
            v[t[1]]++;
        }
        
        for(int i = 1; i <= n; i++)
            if(v[i] == n - 1)
                return i;
        
        return -1;
    }
};
