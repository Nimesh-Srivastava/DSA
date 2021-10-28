class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        
        char result = keysPressed[0];
        
        int time = releaseTimes[0];
        
        for(int i=1; i<keysPressed.size(); i++){
            
            if(releaseTimes[i] - releaseTimes[i-1] > time){
                
                result = keysPressed[i];
                time = releaseTimes[i] - releaseTimes[i-1];
                
            }
            else if(time == releaseTimes[i] - releaseTimes[i-1])
                result = max(result, keysPressed[i]);
            
        }
        
        return result;
    }
};
