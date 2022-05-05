class MyStack {
    
    queue<int> a;
    queue<int> b;
    
public:
    MyStack() {
        
    }
    
    void push(int x) {
        a.push(x);
    }
    
    int pop() {
        
        int temp;
        while(!a.empty()) {
            
            if(a.size() == 1)
                temp = a.front();
            
            else
                b.push(a.front());
            
            a.pop();
        }
        
        b.swap(a);
        
        return temp;
    }
    
    int top() {
        
        int temp;
        
        while(!a.empty()) {
            
            if(a.size() == 1)
                temp = a.front();
            
            b.push(a.front());
            a.pop();
        }  
        
        b.swap(a);
        
        return temp;
    }
    
    bool empty() {
        return a.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
