class MyLinkedList {
    
    int data;
    
    MyLinkedList* head;
    MyLinkedList* next;
    
public:
    MyLinkedList() {
        head = NULL;
        next = NULL;
    }
    
    int get(int index) {
        MyLinkedList* curr = head;
        
        int countNodes = 0;
        while(curr){
            if(countNodes == index)
                return curr -> data;
            
            curr = curr -> next;
            countNodes++;
        }
        
        return -1;
    }
    
    void addAtHead(int val) {
        MyLinkedList* newNode = new MyLinkedList;
        newNode -> data = val;
        newNode -> next = head;
        
        head = newNode;
    }
    
    void addAtTail(int val) {
        MyLinkedList* newNode = new MyLinkedList;
        newNode -> data = val;
        
        if(!head)
            head = newNode;
        
        else{
            MyLinkedList* curr = head;
            
            while(curr -> next)
                curr = curr -> next;
            
            curr -> next = newNode;
        }
    }
    
    void addAtIndex(int index, int val) {
        
        int siz = 0;
        MyLinkedList* curr = head;
        
        while(curr){
            curr = curr -> next;
            siz++;
        }
        
        if(index > siz)
            return;
        
        if(index == 0){
            addAtHead(val);
            return;
        }
        
        int countNodes = 0;
        curr = head;
        
        while(curr && countNodes < index - 1){
            curr = curr -> next;
            countNodes++;
        }
        
        MyLinkedList* newNode = new MyLinkedList;
        newNode -> data = val;
        
        MyLinkedList* idx = curr -> next;
        curr -> next = newNode;
        newNode -> next = idx;
    }
    
    void deleteAtIndex(int index) {
        
        int siz = 0;
        MyLinkedList* curr = head;
        
        while(curr){
            curr = curr -> next;
            siz++;
        }
        
        if(index >= siz)
            return;
        
        if(index == 0){
            if(head)
                head = head -> next;
            
            return;
        }
        
        int countNodes = 0;
        curr = head;
        
        while(curr && countNodes < index - 1){
            curr = curr -> next;
            countNodes++;
        }
        
        curr -> next = curr -> next -> next;
    }
};
