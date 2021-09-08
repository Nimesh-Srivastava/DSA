//create doubly linked list
struct LstNode{
    
    LstNode* next, *prev;
    
    string val;
    
    LstNode() : val(""), next(nullptr), prev(nullptr) {}
    LstNode(string s) : val(s), next(nullptr), prev(nullptr) {}
    LstNode(string s, LstNode* next, LstNode* prev) : val(s), next(next), prev(prev) {}
};

class BrowserHistory {
    
    LstNode* node = new LstNode("");
    LstNode* result = node;
    
public:
    BrowserHistory(string homepage) {
        
        LstNode* n1 = new LstNode(homepage);
        
        node->next = n1;
        
        n1->prev = node;
        
        node = n1;
    }
    
    void visit(string url) {
        
        LstNode* n2 = new LstNode(url);
        
        node->next = n2;
        
        n2->prev = node;
        
        node = n2;
    }
    
    string back(int steps) {
        
        while(node->prev != result && steps--)
            node = node->prev;
        
        return node->val;
    }
    
    string forward(int steps) {
        
        while(steps-- && node->next)
            node = node->next;
        
        return node->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
