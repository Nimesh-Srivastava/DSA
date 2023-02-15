class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry = 0;
        int sum = 0;
        int siz = num.size();

        for(int i = siz - 1; i >= 0; i--) {
            sum = num[i] + (k % 10) + carry;
            num[i] = sum % 10;
            carry = sum / 10;
            k /= 10;
        }

        while (k > 0) {
            sum = (k % 10) + carry;

            num.insert(num.begin(), sum % 10);

            k /= 10;
            carry = sum / 10;
        }

        if (carry > 0)
            num.insert(num.begin(), carry);

        return num;
    }
};
