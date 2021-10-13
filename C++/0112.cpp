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
public:
    bool is_path(TreeNode* root, int targetSum, int curr_sum){
        
        if(!root)
            return false;
        
        curr_sum += root -> val;
        
        if(!root -> left && !root -> right){
            
            if(curr_sum == targetSum)
                return true;
            
            else
                return false;
        }
        
        return (is_path(root -> left, targetSum, curr_sum) || is_path(root -> right, targetSum, curr_sum));
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        return is_path(root, targetSum, 0);
    }
};
