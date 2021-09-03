/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// we do this question by reversing the first half of
// LL, placing a pointer on the head of first and second halves each,
// and then comparing the halves element by element
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next)
            return true;
        
        ListNode* curr = head, *prev = NULL, *mov1 = head, *mov2 = head;
        
        //reverse first half of LL and place mov1 pointer on
        //head of second half
        while(mov2 && mov2->next){
            curr = mov1;
            mov1 = mov1->next;
            mov2 = mov2->next->next;
            curr->next = prev;
            prev = curr;
        }
        
        //if odd number of elements
        if(mov2)
            mov1 = mov1->next;
        
        //comparing first and second halves till prev is not NULL
        while(prev && prev->val == mov1->val){
            prev = prev->next;
            mov1 = mov1->next;
        }
        
        //if prev = NULL, return true, else return false
        return !prev;
    }
};
