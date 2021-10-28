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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode* head = list1, *tail = list1, *point = list2;
        
        a--;
        
        while(a--){
            head = head->next;
        }
        
        while(b--){
            tail = tail->next;
        }
        
        head->next = list2;
        
        while(point->next){
            point = point->next;
        }
        
        point->next = tail->next;
        
        return list1;
    }
};
