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
    void in_order(TreeNode* root, vector<int>& values){
        
        if(!root)
            return;
        
        in_order(root->left, values);
        
        values.push_back(root->val);
        
        in_order(root->right, values);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> result;
        
        in_order(root, result);
        
        return result;
    }
};
