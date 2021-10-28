/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    
    unordered_map<int, int> dp;
    int result = 0;
    
public:
    void calPath(TreeNode* root, int targetSum, int sum){
        
        if(!root)
            return;
        
        sum += root -> val;
        
        result += dp[sum - targetSum];
        
        dp[sum]++;
        
        calPath(root -> left, targetSum, sum);
        calPath(root -> right, targetSum, sum);
        
        dp[sum]--;
    }
    
    int pathSum(TreeNode* root, int targetSum) {
        
        dp[0]++;
        calPath(root, targetSum, 0);
        
        return result;
    }
};
