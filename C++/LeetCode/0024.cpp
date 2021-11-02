class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !(head -> next))
            return head;
        
        ListNode* temp = head;
        
        head = head -> next;
        temp -> next = head -> next;
        head -> next = temp;
        
        head -> next -> next = swapPairs(head -> next -> next);
        
        return head;
    }
};
