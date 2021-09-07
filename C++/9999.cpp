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
//ALWAYS USE STACKS when NEXT GREATER VALUE is to found out.

class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        
        vector<int> v1;
        
        //converting linked list to array
        while(head){
            v1.push_back(head->val);
            head = head->next;
        }
        
        stack<int> s1;
        vector<int> result;
        
        for(int i=v1.size()-1; i>=0; i--){
            
            //if stack is empty, push 0
            if(s1.empty())
                result.push_back(0);
            
            else{
                if(s1.top() > v1[i])
                    result.push_back(s1.top());
                
                else{
                    while(!s1.empty() && s1.top() <= v1[i])
                        s1.pop();
                    
                    if(s1.empty())
                        result.push_back(0);
                    
                    else
                        result.push_back(s1.top());
                }
            }
            
            s1.push(v1[i]);
        }
        
        reverse(result.begin(), result.end());
        
        return result;
    }
};
