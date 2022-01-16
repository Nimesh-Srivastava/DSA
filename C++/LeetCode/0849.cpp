class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        
        int ans  = 0;
        int last = -1;
        
        for(int i = 0; i < seats.size(); i++){
            
            if(seats[i] == 1){
                
                if(last < 0)
                    ans = i;
                
                else
                    ans = max(ans, (i - last) / 2);
                
                last = i;
            }
        }
        
        int siz = seats.size();
        
        ans = max(ans, siz - last - 1);
        
        return ans;
    }
};
