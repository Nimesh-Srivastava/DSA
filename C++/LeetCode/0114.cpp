class Solution {
public:
    void flatten(TreeNode* root) {
        
        TreeNode* head = root;
        
        while(head) {
            if (head -> left) {
                TreeNode* temp = head -> left;
                
                while(temp -> right)
                    temp = temp -> right;
                
                temp -> right = head -> right;
                head -> right = head -> left;
                head -> left = NULL;
            }
            
            head = head -> right;
        }
    }
};
