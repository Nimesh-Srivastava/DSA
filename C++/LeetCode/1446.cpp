class Solution {
public:
    int maxPower(string s) {
        int siz = s.length();
        
        int point1 = 0, point2 = 0;
        
        int power = INT_MIN;
        
        int temp = 0;
        
        while(point1 < siz){
            if(s[point2] == s[point1]){
                temp++;
                point2++;
            }
            
            else{
                temp = 0;
                point1 = point2;
            }
            
            power = max(power, temp);
        }
        
        return power;
    }
};
