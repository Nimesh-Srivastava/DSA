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