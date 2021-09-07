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

//This is a typical question. Various different forms of this question exist.
//It is better to remember the method to solve this question.
//ALWAYS USE STACKS when NEXT GREATER VALUE is to be found out.

class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        
        vector<int> v;
        
        //converting linked list to array
        while(head){
            v.push_back(head->val);
            head = head->next;
        }
        
        stack<int> s;
        vector<int> result(v.size());
        
        for(int i=0; i<v.size(); i++){
            
            //if v[i] > top of stack, push v[i] in result, and pop from stack
            //until top of stack < v[i] or stack becomes empty
            while(!s.empty() && v[i] > v[s.top()]){
                result[s.top()] = v[i];
                s.pop();
            }
            
            //we store indices in stacks to consume less memory
            s.push(i);
        }
        
        //for all remaining values of input array, there is no greater value
        //hence, we push 0 in result, and pop the stack
        while(!s.empty()){
            result[s.top()] = 0;
            s.pop();
        }
        
        return result;
    }
};
