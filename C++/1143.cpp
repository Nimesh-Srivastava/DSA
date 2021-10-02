//solution using dynamic programming
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        int l1 = text1.size();
        int l2 = text2.size();
        int ans[l1 + 1][l2 + 1];
        
        for (int i = 0; i <= l1; i++) {
            for (int j = 0; j <= l2; j++) {
                
                if (i == 0 || j == 0)
                    ans[i][j] = 0;
                
                else if (text1[i - 1] == text2[j - 1])
                    ans[i][j] = ans[i - 1][j - 1] + 1;
                
                else
                    ans[i][j] = max(ans[i - 1][j], ans[i][j - 1]);
            }
        }
        
        return ans[l1][l2];
    }
};
