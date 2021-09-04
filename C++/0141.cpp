/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        //take 2 pointers, move one ahead of another
        //if they ever eqaulise, then list has a cycle
        ListNode* mov1 = head, *mov2 = head;
        
        while(mov2 && mov2->next){
            mov1 = mov1->next;
            mov2 = mov2->next->next;
            
            if(mov1 == mov2)
                return true;
        }
        
        return false;
    }
};
