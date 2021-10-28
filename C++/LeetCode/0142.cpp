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