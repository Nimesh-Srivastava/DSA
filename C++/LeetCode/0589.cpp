/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void preOrder(Node* root, vector<int>& ans) {
        if (!root)
            return;
        
        ans.push_back(root -> val);
        
        for(auto& child : root -> children)
            preOrder(child, ans);
    }
    
    vector<int> preorder(Node* root) {
        
        vector<int> ans;
        
        preOrder(root, ans);
        
        return ans;
    }
};
