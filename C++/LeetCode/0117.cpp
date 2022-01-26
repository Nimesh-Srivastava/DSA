class Solution {
public:
    Node* connect(Node* root) {
        
        if(!root)
            return NULL;
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            
            int siz = q.size();
            
            for(int i = 0; i < siz; i++){
                
                Node* temp = q.front();
                
                if(i == siz - 1)
                    temp -> next = NULL;
                
                q.pop();
                
                if(i != siz - 1)
                    temp -> next = q.front();
                
                if(temp -> left != NULL)
                    q.push(temp -> left);
                
                if(temp -> right != NULL)
                    q.push(temp -> right);
            }
        }
        
        return root;
    }
};
