class BSTIterator {
    
    TreeNode* node = NULL;
    stack<TreeNode*> st;
    
public:
    BSTIterator(TreeNode* root) {
        node = root;
    }
    
    int next() {
        (void)hasNext();
        
        node = st.top();
        st.pop();
        
        int result = node -> val;
        node = node -> right;
        
        return result;
    }
    
    bool hasNext() {
        while(node){
            st.push(node);
            node = node -> left;
        }
        
        return st.size(); //return false if size = 0, true otherwise
    }
};
