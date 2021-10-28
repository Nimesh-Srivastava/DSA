class Solution {
public:
    string addStrings(string num1, string num2) {
        
        if(num1.length() > num2.length())
            swap(num1, num2);
        
        int n1 = num1.size();
        int n2 = num2.size();
        
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        
        int carry = 0;
        
        string result;
        
        for(int i = 0; i < n1; i++){
            int sum = (num1[i] - '0') + (num2[i] - '0') + carry;
            result.push_back(sum % 10 + '0');
            carry = sum / 10;
        }
        
        for(int i = n1; i < n2; i++){
            int sum = (num2[i] - '0') + carry;
            result.push_back(sum % 10 + '0');
            carry = sum / 10;
        }
        
        if(carry)
            result.push_back(carry + '0');
        
        reverse(result.begin(), result.end());
        
        return result;
    }
};
