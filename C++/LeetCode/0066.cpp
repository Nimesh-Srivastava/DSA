class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        
        for(int i=digits.size()-1; i>=0; i--){
            int sum = digits[i] + carry;
            carry = sum / 10;
            digits[i] = sum % 10;
        }
        if(carry == 1)
            digits.insert(digits.begin(), carry);
        return digits;
    }
};
