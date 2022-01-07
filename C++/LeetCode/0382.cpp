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
    
    ListNode* temp;
    
public:
    Solution(ListNode* head) {
        temp = head;
    }
    
    int getRandom() {
        
        int result = 0, cnt = 1;
        
        ListNode* node = temp;
        
        while(node){
            
            if(rand() % cnt == 0)
                result = node -> val;
            
            cnt++;
            
            node = node -> next;
        }
        
        return result;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
