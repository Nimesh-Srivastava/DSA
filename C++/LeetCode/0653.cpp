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
    void inorder(TreeNode* root, vector<int>& result){
        
        if(!root)
            return;
        
        inorder(root -> left, result);
        
        result.push_back(root -> val);
        
        inorder(root -> right, result);
    }
    
    bool findTarget(TreeNode* root, int k) {
        
        vector<int> result;
        
        inorder(root, result);
        
        int l = 0;
        int r = result.size() - 1;
        int sum = 0;
        
        while(l < r){
            
            sum = result[l] + result[r];
            
            if(sum == k)
                return true;
            
            else if(sum < k)
                l++;
            
            else
                r--;
        }
        
        return false;
    }
};
