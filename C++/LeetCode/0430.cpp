/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* sol(Node* head){
        
        Node* curr = head, *temp = head;
        
        while(curr){
            
            if(curr->child){
                Node* tail = sol(curr->child);
                
                tail->next = curr->next;
                if(curr->next)
                    curr->next->prev = tail;
                
                curr->next = curr->child;
                curr->child->prev = curr;
                
                curr->child = NULL;
                
                curr = temp;
            }
            else
                curr = curr->next;
            
            if(curr)
                temp = curr;
        }
        return temp;
    }
    
    Node* flatten(Node* head) {
        if(head)
            sol(head);
        
        return head;
    }
};
