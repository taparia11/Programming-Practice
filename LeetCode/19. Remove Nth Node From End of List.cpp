// Problem Link => https://leetcode.com/problems/remove-nth-node-from-end-of-list/

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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *fast = head;
        int count = 0;
        while (fast)
        {
            fast = fast->next;
            count++;
        }

        if (head == NULL || count == 1)
            return nullptr;
        if (count == n)
        {
            return head->next;
        }

        count -= ++n;
        fast = head;
        while (count-- > 0)
        {
            fast = fast->next;
        }

        fast->next = fast->next->next;

        return head;
    }
};