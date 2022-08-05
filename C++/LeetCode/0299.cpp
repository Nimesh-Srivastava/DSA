class Solution {
public:
    string getHint(string secret, string guess) {
        int n = secret.size();
        
        int a[10] = {0}, b[10] = {0};
        int bulls = 0, cows = 0;
        
        for(int i = 0; i < n; i++) {
            if(secret[i] == guess[i])
                bulls++;
            
            else {
                a[secret[i] - '0']++;
                b[guess[i] - '0']++;
            }
        }
        
        for(int i = 0; i < 10; i++)
            cows += min(a[i], b[i]);
        
        return to_string(bulls) + 'A' + to_string(cows) + 'B';
    }  
};
