//Solution 1:-
class Solution {
public:
  ListNode *detectCycle(ListNode *head) {
    if (!head or !head->next)
      return nullptr;
    ListNode *slow{head}, *fast{head}, *entry{head};
    while (fast and fast->next) {
      slow = slow->next;
      fast = fast->next->next;
      if (slow == fast) {
        while (entry != slow) {
          entry = entry->next;
          slow = slow->next;
        }
        return entry;
      }
    }
    return nullptr;
  }
};


//Solution 2:-
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if(!head || !head -> next)
            return NULL;
        
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(fast && fast -> next){
            fast = fast -> next -> next;
            slow = slow -> next;
            
            if(fast == slow)
                break;
        }
        
        if(!fast || !fast -> next)
            return NULL;
        
        fast = head;
        
        while(fast != slow){
            fast = fast -> next;
            slow = slow -> next;
        }
        
        return fast;
    }
};
