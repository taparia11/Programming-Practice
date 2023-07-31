// Problem Link => https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/

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
    ListNode *deleteMiddle(ListNode *head)
    {
        ListNode *ptr = head;
        int count = 0;
        while (ptr)
        {
            count++;
            ptr = ptr->next;
        }
        if (count == 0 || count == 1)
        {
            head = NULL;
            return head;
        }
        count /= 2;
        count -= 1;
        ptr = head;
        while (count--)
        {
            ptr = ptr->next;
        }
        ptr->next = ptr->next->next;

        return head;
    }
};