/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {};
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* t1 = headA, *t2 = headB;
        int count1 = 0, count2 = 0;
        
        //find length of 1st LL
        while(t1){
            count1++;
            t1 = t1->next;
        }
        
        //find length of 2nd LL
        while(t2){
            count2++;
            t2 = t2->next;
        }
        
        //reset pointers' position
        t1 = headA;
        t2 = headB;
        
        //put pointers on same position on both LL
        if(count1 > count2){
            for(int i=0; i<count1-count2; i++){
                t1 = t1->next;
            }
        }
        else{
            for(int i=0; i<count2-count1; i++){
                t2 = t2->next;
            }
        }
        
        while(t1 != t2){
            t1 = t1->next;
            t2 = t2->next;
        }
        
        return t1;
    }
};
