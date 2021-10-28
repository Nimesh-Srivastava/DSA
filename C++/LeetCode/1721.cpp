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
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode* front = head, *end = head;
        int temp = k-1;
        
        int count = 0;
        
        while(front){
            front = front->next;
            count = count + 1;
        }
        
        front = head;
        
        while(temp){
            front = front->next;
            temp = temp - 1;
        }
        
        temp = count - k;
        
        while(temp){
            end = end->next;
            temp = temp - 1;
        }
        
        int num = front->val;
        front->val = end->val;
        end->val = num;
        
        return head;
    }
};
