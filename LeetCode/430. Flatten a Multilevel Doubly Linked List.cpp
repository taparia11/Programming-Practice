// Problem Link => https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/description/

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:

    Node* merge(Node* list){
        while(list->next!=NULL)
            list = list->next;
        return list;
    }

    Node* flatten(Node* head) {
        Node *ptr = head;
        if(!head)  return ptr;

        while(ptr!=NULL){
            if(ptr->child!=NULL){
                Node* temp = merge(ptr->child);
                temp->next = ptr->next;
                if(ptr->next!=NULL)
                ptr->next->prev = temp;
                ptr->next = ptr->child;
                ptr->child->prev = ptr;
                ptr->child = NULL;
            }
            ptr = ptr->next;
        }
        ptr = head;
        while(ptr){
            // if(ptr->child!=NULL)
            ptr->child = NULL;
            ptr=ptr->next;
        }
        return head;
    }
};