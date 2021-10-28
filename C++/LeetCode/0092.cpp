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