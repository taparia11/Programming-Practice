// Problem Link => https://leetcode.com/problems/search-in-a-binary-search-tree/description/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        // Solving Iteratively 
        TreeNode *temp = root ; 

        while(temp != NULL)
        {
            if (temp -> val == val)
            {
                return temp ; 
            }

            if (temp -> val > val)
            {
                temp = temp -> left; 
            }
            else
            {
                temp = temp -> right ; 
            }
        }
        return NULL ;  
    }
};