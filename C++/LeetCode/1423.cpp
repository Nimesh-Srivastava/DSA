class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int sum = 0;
        for(int i = 0; i < k; i++)
            sum += cardPoints[i];
        
        int result = sum;
        for(int i = k - 1, j = cardPoints.size() - 1; i >= 0; i--, j--) {
            sum += cardPoints[j] - cardPoints[i];
            result = max(result, sum);
        }
        return result;
    }
};
