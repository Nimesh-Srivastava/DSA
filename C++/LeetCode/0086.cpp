class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        
        ListNode* left = new ListNode(0);
        ListNode* right = new ListNode(0);
        
        ListNode* leftList = left;
        ListNode* rightList = right;
        
        while(head) {
            if (head -> val < x) {
                leftList -> next = head;
                leftList = leftList -> next;
            }
            else {
                rightList -> next = head;
                rightList = rightList -> next;
            }
            
            head = head -> next;
        }
        
        leftList -> next = right -> next;
        rightList -> next = NULL;
        
        return left -> next;
    }
};
