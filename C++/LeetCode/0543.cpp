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
    int recur(TreeNode* root, int& max_val){
        if(!root)
            return 0;
        
        int count_l = recur(root->left, max_val);
        int count_r = recur(root->right, max_val);
        
        max_val = max(max_val, count_l + count_r);
        
        return max(count_l, count_r) + 1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        
        int result = 0;
        
        recur(root, result);
        
        return result;
    }
};
