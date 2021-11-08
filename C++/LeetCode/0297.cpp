class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s;
        s.clear();
        
        if(!root)
            return s;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            TreeNode* frnt = q.front();
            q.pop();
            
            if(!frnt)
                s.append("#,");
            
            else
                s.append(to_string(frnt -> val) + ',');
            
            if(frnt){
                q.push(frnt -> left);
                q.push(frnt -> right);
            }
        }
        
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size() == 0)
            return NULL;
        
        stringstream s(data);
        
        string str;
        str.clear();
        
        getline(s, str, ',');
        
        TreeNode* root = new TreeNode(stoi(str));
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            TreeNode* frnt = q.front();
            q.pop();
            
            getline(s, str, ',');
            
            if(str == "#")
                frnt -> left = NULL;
            
            else{
                TreeNode* temp = new TreeNode(stoi(str));
                frnt -> left = temp;
                q.push(temp);
            }
            
            getline(s, str, ',');
            
            if(str == "#")
                frnt -> right = NULL;
            
            else{
                TreeNode* temp = new TreeNode(stoi(str));
                frnt -> right = temp;
                q.push(temp);
            }
        }
        
        return root;
    }
};
