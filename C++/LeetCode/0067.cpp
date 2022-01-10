class Solution {
public:
    string addBinary(string a, string b) {
        
        int i = a.length() - 1;
        int j = b.length() - 1;
        
        int carr = 0;
        
        string result;
        
        while(i >= 0 || j >= 0){
            
            int sum = carr;
            
            if(i >= 0)
                sum += a[i--] - '0';
            
            if(j >= 0)
                sum += b[j--] - '0';
            
            if(sum > 1)
                carr = 1;
            else
                carr = 0;
            
            result += to_string(sum % 2);
        }
        
        if(carr)
            result += to_string(carr);
        
        reverse(result.begin(), result.end());
        
        return result;
    }
};
