// Problem Link => https://leetcode.com/problems/reverse-linked-list/

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
class Solution
{
public:
    // Using recursion
    ListNode *reverseList(ListNode *head)
    {

        if (head == NULL || head->next == NULL)
            return head;

        ListNode *ptr = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return ptr;

        // Using Stack
        //  ListNode* reverseList(ListNode* head) {
        //      ListNode* ptr2=head;
        //      stack<int> st;
        //      while(ptr2!=NULL){
        //          st.push(ptr2->val);
        //          ptr2 = ptr2->next;
        //      }
        //      ListNode* ptr1 = new ListNode();
        //      ptr2 = ptr1;
        //      // head=ptr2;
        //      while(!st.empty()){
        //          ListNode* ptr = new ListNode(st.top());
        //          st.pop();
        //          ptr1->next = ptr;
        //          ptr1 = ptr1->next;
        //      }
        //      return ptr2->next;
    }
};