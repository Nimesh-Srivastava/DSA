// Solution 1 :-
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        ListNode* dummy = new ListNode(0);
        dummy -> next = head;
        
        ListNode* prev = dummy;
        
        for(int i = 0; i < left - 1; i++)
            prev = prev -> next;
        
        ListNode* curr = prev -> next;
        
        for(int i = 0; i < right - left; i++) {
            ListNode* temp = curr -> next;
            curr -> next = temp -> next;
            temp -> next = prev -> next;
            prev -> next = temp;
        }
        
        return dummy -> next;
    }
};


// Solution 2 :-
class Solution {
public:
  ListNode *reverseBetween(ListNode *head, int left, int right) {
    if (left == right or !head)
      return head;
    ListNode *start{nullptr}, *prev{nullptr}, *curr{head};
    int count{right - left};
    while (curr and left--) {
      start = prev;
      prev = curr;
      curr = curr->next;
    }
    ListNode *begin{prev};
    while (curr and count--) {
      ListNode *next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
    }
    begin->next = curr;
    if (start) {
      start->next = prev;
      return head;
    }
    return prev;
  }
};
