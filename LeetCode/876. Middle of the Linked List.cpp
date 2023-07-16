// Problem Link => https://leetcode.com/problems/middle-of-the-linked-list/description/

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
    ListNode *middleNode(ListNode *head)
    {
        int i, count = 1;
        ListNode *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
            count++;
        }
        //    cout<<count;
        if (count % 2 == 0)
        {
            for (i = 1; i <= count / 2; i++)
            {
                head = head->next;
            }
            return head;
        }
        else
        {
            for (i = 1; i <= (count) / 2; i++)
            {
                head = head->next;
            }
            return head;
        }
    }
};