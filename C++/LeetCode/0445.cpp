class Solution {
public:
  ListNode *addRec(ListNode *l1, ListNode *l2, int &carry) {
    if (!l1 and !l2)
      return nullptr;
    ListNode *curr{new ListNode(-1)};
    curr->next = addRec(l1->next, l2->next, carry);

    curr->val = (l1->val + l2->val + carry) % 10;
    carry = (l1->val + l2->val + carry) / 10;
    return curr;
  }
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode *a{l1}, *b{l2};
    while (a or b) {
      if (!a) {
        ListNode *zero{new ListNode(0)};
        zero->next = l1;
        l1 = zero;
        b = b->next;
      } else if (!b) {
        ListNode *zero{new ListNode(0)};
        zero->next = l2;
        l2 = zero;
        a = a->next;
      } else {
        a = a->next;
        b = b->next;
      }
    }
    int carry{0};
    ListNode *head{addRec(l1, l2, carry)};
    if (carry) {
      ListNode *start{new ListNode(carry)};
      start->next = head;
      head = start;
    }
    return head;
  }
};