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
    void post_order(TreeNode* root, vector<int>& values){
        
        if(!root)
            return;
        
        post_order(root->left, values);
        
        post_order(root->right, values);
        
        values.push_back(root->val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> result;
        
        post_order(root, result);
        
        return result;
    }
};
