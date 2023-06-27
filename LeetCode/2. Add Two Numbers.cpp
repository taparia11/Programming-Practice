// Problem Link => https://leetcode.com/problems/add-two-numbers/description/

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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ptr1=l1;
        ListNode* ptr2=l2;
        ListNode* ptr3 = new ListNode(0);
        
        int carry=0;
        ListNode* ans = ptr3;

        while(ptr1!=NULL && ptr2!=NULL){
            int val1 = ptr1->val;
            int val2 = ptr2->val;
            int val = val1+val2+carry;
            carry = val/10;
            ListNode* temp = new ListNode(val%10);
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
            ptr3->next = temp;
            ptr3 = ptr3->next;
        }
        if(carry!=0){
            ListNode* temp = new ListNode(carry);
            ptr3->next = temp;
        }
        if(ptr1==NULL && ptr2==NULL)
            return ans->next;
        else if(ptr1==NULL && ptr2!=NULL)
        {
            while(carry!=0 && ptr2!=nullptr){
            int val =ptr2->val+carry;
            carry = val/10;
            ListNode* temp = new ListNode(val%10);
            ptr2 = ptr2->next;
            ptr3->next = temp;
            ptr3 = ptr3->next;
            }
            if(carry==0)
                ptr3->next = ptr2;
            else{
                ListNode* temp = new ListNode(carry);
                ptr3->next = temp;
            }
        }
        else if(ptr1!=NULL && ptr2==NULL){
            // cout<<ptr1->val;
            while(carry!=0 && ptr1!=nullptr){
            int val = ptr1->val;
            val = val + carry;
            carry = val/10;
            ListNode* temp = new ListNode(val%10);
            ptr1 = ptr1->next;
            ptr3->next = temp;
            ptr3 = ptr3->next;
            }
            if(carry==0)
                ptr3->next = ptr1;
            else{
                ListNode* temp = new ListNode(carry);
                ptr3->next = temp;
            }
        }
        else 
            ptr3->next = ptr1;

            // cout<<ans->val;
        return ans->next;
    }
};