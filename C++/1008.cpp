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
    TreeNode* pre_order(vector<int>& preorder, 
                   vector<int>:: iterator l, vector<int>:: iterator h){
        
        if(l >= h)
            return NULL;
        
        TreeNode* root = new TreeNode(*l);
        
        auto it = upper_bound(l + 1, h, *l);
        
        root -> left = pre_order(preorder, l + 1, it);
        root -> right = pre_order(preorder, it, h);
        
        return root;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return pre_order(preorder, preorder.begin(), preorder.end());
    }
};
