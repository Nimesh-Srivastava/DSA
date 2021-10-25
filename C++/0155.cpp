class MinStack {

    stack<int> st;
    
    vector<int> minVal;
    
public:
    MinStack() {
        
    }
    
    void push(int val) {
        
        if(minVal.empty() || minVal.back() >= val)
            minVal.push_back(val);
        else
            minVal.push_back(minVal.back());
        
        st.push(val);
    }
    
    void pop() {
        st.pop();
        minVal.pop_back();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minVal.back();
    }
};
