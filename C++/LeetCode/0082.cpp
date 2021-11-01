class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(!head)
            return NULL;
        
        ListNode* prev = NULL;
        ListNode* temp = head;
        ListNode* latter = head -> next;
        
        while(latter){
            if(temp -> val == latter -> val){
                while(latter && latter -> val == temp -> val)
                    latter = latter -> next;
                
                if(!prev)
                    head = latter;
                else
                    prev -> next = latter;
            }
            else
                prev = temp;
            
            temp = latter;
            if(temp)
                latter = latter -> next;
        }
        
        return head;
    }
};
