class Solution {
public:
    ListNode* reverseList(ListNode* head, ListNode* tail){
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* latter = NULL;
        
        while(curr != tail){
            latter = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = latter;
        }
        
        return prev;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        
        for(int i = 0; i < k; i++){
            if(!curr)
                return head;
            
            curr = curr -> next;
        }
        
        ListNode* temp = reverseList(head, curr);
        
        head -> next = reverseKGroup(curr, k);
        
        return temp;
    }
};
