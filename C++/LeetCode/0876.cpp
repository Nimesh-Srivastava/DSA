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
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        
        ListNode* temp;
        temp = head;
        
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        
        if((count % 2) != 0){
            count++;
            count = count / 2;
        }
        else{
            count = count / 2;
            count++;
        }
        
        for(int i=0; i<count-1; i++){
            head = head->next;
        }
        
        return head;
    }
};
