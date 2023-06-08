// Problem Link => https://leetcode.com/problems/design-linked-list/description/

class Node{
public:
    int val;
    Node* next;
    Node(): val(0),next(NULL){}
    Node(int data): val(data), next(NULL) {}
};

class MyLinkedList {
public:
    Node* head;
    MyLinkedList() {
        head = NULL;
    }
    
    int get(int index) {
        int count=0;
        Node* ptr=head;
        while(ptr!=NULL){
            if(count==index)
                return ptr->val;
            else{
                count++;
                ptr = ptr->next;
            }
        }
        return -1;
    }
    
    void addAtHead(int val) {
        Node* ptr = new Node(val);
        ptr->next = head;
        head = ptr;
    }
    
    void addAtTail(int val) {
        Node* ptr = new Node(val);
        if(head==NULL){
            head=ptr;
            return;
        }
        Node* tptr=head;
        while(tptr->next!=NULL){
            tptr = tptr->next;
        }
        tptr->next = ptr;
    }
    
    void addAtIndex(int index, int val) {
        Node* ptr = new Node(val);
        int count=1;
        Node* tptr=head;
        if(index==0){
            ptr->next=head;
            head=ptr;
            return;
        }
        while(tptr != NULL){
            if(count==index){
                ptr->next = tptr->next;
                tptr->next = ptr;
                return; 
            }
            count++;
            tptr = tptr->next;
            
        }
    }
    
    void deleteAtIndex(int index) {
        Node* ptr=head;
        int count=0;
        if(count==index){
                head=ptr->next;
                return;
            }
        while(ptr->next!=NULL){
            if(count+1==index){
                ptr->next = ptr->next->next;
                return;
            }
            ptr=ptr->next;
            count++;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */