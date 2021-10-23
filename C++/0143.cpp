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