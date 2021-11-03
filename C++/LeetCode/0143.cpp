//Solution 1 :-
class Solution {
public:
  void reorderList(ListNode *head) {
    ListNode *slow{head}, *fast{slow}, *temp{nullptr}, *curr{nullptr};
    std::stack<ListNode *> stk;
    while (fast and fast->next) {
      slow = slow->next;
      fast = fast->next->next;
    }
    while (slow) {
      temp = slow->next;
      stk.push(temp);
      slow->next = nullptr;
      slow = temp;
    }
    stk.pop();
    slow = head;
    while (!stk.empty()) {
      temp = slow->next;
      curr = stk.top();
      stk.pop();
      curr->next = slow->next;
      slow->next = curr;
      slow = temp;
    }
  }
};


//Solution 2 :-
class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head || !head -> next || !head -> next -> next)
            return;
        
        stack<ListNode*> st;
        
        ListNode* curr = head;
        
        int siz = 0;
        
        while(curr){
            st.push(curr);
            
            siz++;
            
            curr = curr -> next;
        }
        
        curr = head;
        
        for(int i = 0; i < siz/2; i++){
            ListNode* temp = st.top();
            st.pop();
            
            temp -> next = curr -> next;
            curr -> next = temp;
            curr = curr -> next -> next;
        }
        
        curr -> next = NULL;
    }
};
