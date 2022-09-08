// Solution 1 :-
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


// Solution 2 :-
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> nodes;
        stack<TreeNode*> st;
        
        while (root || !st.empty()) {
            while (root) {
                st.push(root);
                root = root -> left;
            }
            
            root = st.top();
            st.pop();
            
            nodes.push_back(root -> val);
            root = root -> right;
        }
        return nodes;
    }
};
