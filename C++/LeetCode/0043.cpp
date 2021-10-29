class Solution {
public:
    string multiply(string num1, string num2) {
        
        int siz1 = num1.length();
        int siz2 = num2.length();
        
        vector<int> store((siz1 + siz2), 0);
        
        for(int i = siz1 - 1; i >= 0; i--){
            for(int j = siz2 - 1; j >= 0; j--){
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = store[i + j + 1] + mul;
                
                store[i + j] += sum / 10;
                store[i + j + 1] = sum % 10;
            }
        }
        
        string result = "";
        
        for(int i = 0; i < (siz1 + siz2); i++)
            if(result.length() != 0 || store[i] != 0)
                result += (store[i] + '0');
        
        if(result.length() == 0){
            return "0";
        }
        
        return result;
    }
};
