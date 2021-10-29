class Solution {
public:
    Node* connect(Node* root) {
        
        if(!root)
            return NULL;
        
        queue<Node*> nodes;
        nodes.push(root);
        
        while(!nodes.empty()){
            
            int siz = nodes.size();
            
            while(siz--){
                
                auto frnt = nodes.front();
                nodes.pop();
                
                if(siz != 0)
                    frnt -> next = nodes.front();
                else
                    frnt -> next = NULL;
                
                if(frnt -> left)
                    nodes.push(frnt -> left);
                
                if(frnt -> right)
                    nodes.push(frnt -> right);
            }
        }
        
        return root;
    }
};
