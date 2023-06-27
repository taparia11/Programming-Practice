// Problem Link => https://leetcode.com/problems/intersection-of-two-linked-lists/submissions/981052325/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* ptr1 = headA;
        ListNode* ptr2 = headB;

        int cl1=0,cl2=0;
        while(ptr1){
            ptr1 = ptr1->next;
            cl1++;
        }
        while(ptr2){
            ptr2 = ptr2->next;
            cl2++;
        }

        if(cl1==cl2 && headA==headB)
            return headA;

        if(cl1>=cl2){
            cl1 = cl1-cl2;
            ptr1 =headA;
            ptr2 =headB;
            while(cl1--)
                ptr1 = ptr1->next;
            while(ptr1!=ptr2){
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }
            // return ptr2;
            if(ptr1==NULL || ptr2==NULL)
                return NULL;
            else
                return ptr1;
            // if(ptr1->next->val==ptr2->next->val)
        }
        else{
            cl2 = cl2-cl1;
            ptr1 =headA;
            ptr2 =headB;
            while(cl2--)
                ptr2 = ptr2->next;
            while(ptr1!=ptr2){
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }

            if(ptr1==NULL || ptr2==NULL)
                return NULL;
            else
                return ptr1;
        }
        return nullptr;
    }
};