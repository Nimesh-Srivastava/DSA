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
    void pre_order(TreeNode* root, vector<int>& values){
        
        if(!root)
            return;
        
        values.push_back(root->val);
        
        if(root->left)
            pre_order(root->left, values);
        
        if(root->right)
            pre_order(root->right, values);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> result;
        
        pre_order(root, result);
        
        return result;
    }
};
