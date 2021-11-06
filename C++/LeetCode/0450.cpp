class Solution {
public:
    int getVal(TreeNode* root){
        if(!root -> right)
            return root -> val;
        
        return getVal(root -> right);
    }
    
    TreeNode* delNode(TreeNode* root, int key){
        if(!root)
            return NULL;
        
        if(root -> val == key){
            
            TreeNode* temp;
            
            if(!root -> left && !root -> right)
                return NULL;
            
            else if(!root -> left){
                temp = root -> right;
                delete(root);
                return temp;
            }
            
            else if(!root -> right){
                temp = root -> left;
                delete(root);
                return temp;
            }
            
            else{
                root -> val = getVal(root -> left);
                
                root -> left = delNode(root -> left, root -> val);
                
                return root;
            }
        }
        
        root -> left = delNode(root -> left, key);
        root -> right = delNode(root -> right, key);
        
        return root;
    }
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        TreeNode* result = delNode(root, key);
        
        return result;
    }
};
