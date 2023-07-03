// Problem Link => https://leetcode.com/problems/swap-nodes-in-pairs/description/

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


    ListNode* swap(ListNode* list){
        ListNode* sp = list->next;
        list->next = list->next->next;
        sp->next = list;
        return sp;

    }
    ListNode* swapPairs(ListNode* head) {
        ListNode *ptr = new ListNode();
        ListNode* ans = ptr;

        while(head && head->next){
            ListNode* temp = swap(head);
            ptr->next = temp;
            ptr = ptr->next->next;
            head = head->next;
        }
        if(head){
            ptr->next = head;
        }
        return ans->next;
    }
};