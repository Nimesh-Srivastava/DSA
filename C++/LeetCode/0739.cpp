class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        vector<int> answer(temperatures.size(), 0);
        
        stack<int> st;
        
        for(int i = 0; i < temperatures.size(); i++){
            
            while(!st.empty() && temperatures[st.top()] < temperatures[i]){
                answer[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
        }
        
        while(!st.empty()){
            answer[st.top()] = 0;
            st.pop();
        }
        
        return answer;
    }
};
