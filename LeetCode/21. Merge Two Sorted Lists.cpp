// Problem Link => https://leetcode.com/problems/merge-two-sorted-lists/description/

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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *list3 = NULL;
        if (list1 == NULL && list2 == NULL)
            return list3;
        if (list1 == NULL)
            return list2;
        else if (list2 == NULL)
            return list1;
        else if (list1->val >= list2->val)
        {
            list3 = list2;
            list2 = list2->next;
        }
        else
        {
            list3 = list1;
            list1 = list1->next;
        }
        ListNode *ans = list3;
        while (list1 != NULL && list2 != NULL)
        {
            if (list1->val >= list2->val)
            {
                list3->next = list2;
                list3 = list3->next;
                list2 = list2->next;
            }
            else
            {
                list3->next = list1;
                list3 = list3->next;
                list1 = list1->next;
            }
        }
        if (list1 == NULL)
        {
            list3->next = list2;
        }
        else
        {
            list3->next = list1;
        }

        return ans;
    }
};