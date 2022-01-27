class Trie{
public:
    Trie* left;
    Trie* right;
};

Trie* insertNode(Trie* head, int val){
        
    Trie* curr = head;
        
    for(int i = 31; i >= 0; i--){
        
        int bit = (val >> i) & 1;
            
        if(bit == 0){
            if(!curr -> left)
                curr -> left = new Trie();
                
            curr = curr -> left;
        }
        else{
            if(!curr -> right)
                curr -> right = new Trie();
                
            curr = curr -> right;
        }
    }
        
    return head;
}

class Solution {
public:
    int calXor(Trie* head, vector<int>& nums){
        
        int maxVal = INT_MIN;
        
        for(int i = 0; i < nums.size(); i++){
            
            int val = nums[i];
            int temp = 0;
            
            Trie* curr = head;
            
            for(int j = 31; j >= 0; j--){
                
                int bit = (val >> j) & 1;;
                
                if(bit == 0){
                    
                    if(curr -> right){
                        temp += pow(2, j);
                        curr = curr -> right;
                    }
                    
                    else
                        curr = curr -> left;
                }
                
                else{
                    
                    if(curr -> left){
                        temp += pow(2, j);
                        curr = curr -> left;
                    }
                    
                    else
                        curr = curr -> right;
                }
            }
            maxVal = max(maxVal, temp);
        }
        
        return maxVal;
    }
    
    int findMaximumXOR(vector<int>& nums) {
        
        Trie* head = new Trie();
        
        for(int i = 0; i < nums.size(); i++)
            head = insertNode(head, nums[i]);
        
        return calXor(head, nums);
    }
};
