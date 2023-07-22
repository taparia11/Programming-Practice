// Problem Link => https://leetcode.com/problems/palindrome-linked-list/description/

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
    bool isPalindrome(ListNode *head)
    {
        vector<int> arr;
        while (head)
        {
            arr.emplace_back(head->val);
            head = head->next;
        }

        int n = arr.size();
        int i = 0;
        n--;
        for (; i <= n; i++, n--)
            if (arr[i] != arr[n])
                return 0;
        return 1;
    }
};