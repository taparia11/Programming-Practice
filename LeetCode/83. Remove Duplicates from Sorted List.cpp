// Problem Link => https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/

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
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (!head || !head->next)
            return head;
        ListNode *ptr = head->next;
        ListNode *tptr = head;
        while (ptr)
        {
            if (tptr->val == ptr->val)
            {
                tptr->next = ptr->next;
            }
            else
            {
                tptr = tptr->next;
            }
            ptr = ptr->next;
        }
        return head;
    }
};