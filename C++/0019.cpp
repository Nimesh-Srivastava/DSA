//Solution 1 :-
class Solution {
public:
  ListNode *removeNthFromEnd(ListNode *head, int n) {
    ListNode *prev{nullptr}, *start{head}, *end{head};
    while (n > 1) {
      end = end->next;
      n--;
    }
    end = end->next;
    while (end) {
      end = end->next;
      prev = start;
      start = start->next;
    }
    if (!prev) {
      return start->next;
    }
    prev->next = start->next;
    start->next = nullptr;
    delete start;
    return head;
  }
};


//Solution 2 :-
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* fast = head;
        ListNode* slow = head;
        
        for(int i=0; i<n; i++)
            fast = fast -> next;
        
        if(!fast)
            return head -> next;
        
        while(fast -> next){
            fast = fast -> next;
            slow = slow -> next;
        }
        
        slow -> next = slow -> next -> next;
        
        return head;
    }
};
