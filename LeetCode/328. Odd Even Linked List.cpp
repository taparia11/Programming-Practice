// Problem Link => https://leetcode.com/problems/odd-even-linked-list/

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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* fast=head;
        
        int count =0 ;
        while(fast){
            fast= fast->next;
            count++;
        }

        if(count<2)
            return head;
        ListNode* odd=head;
        ListNode* ret=odd;
        ListNode* even=head->next;
        fast=even->next;
        head = even;
        while(fast){
            if(count%2==0){
                even->next = fast->next;
                even = even->next;
                odd->next = fast;
                odd = odd->next;
                fast = fast->next->next;
            }
            else{
                odd->next = fast;
                odd = odd->next;
                if(fast->next){
                    even->next = fast->next;
                    even = even->next;
                    fast = fast->next->next;
                }
                else{
                    fast=NULL;
                    even->next=NULL;
                }
            }
        }
        odd->next = head;
        return ret;
    }
};