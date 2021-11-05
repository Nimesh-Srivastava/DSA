class Solution {
    
    int currVal = 0;
    vector<int> pre;
    vector<int> ino;
    
public:
    TreeNode* process(int left, int right) {
        if (left > right)
            return NULL;
        
        int countVal = 0;
        
        while (ino[countVal] != pre[currVal])
            countVal++;

        currVal++;
        
        TreeNode* node = new TreeNode(ino[countVal]);
        
        node -> left = process(left, countVal - 1);
        node -> right = process(countVal + 1, right);
        
        return node;
        
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        pre = preorder;
        ino = inorder;
        
        return process(0, preorder.size() - 1);
    }
};
