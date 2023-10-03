// Problem Link => https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/description/

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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i =0 ;
        return build(preorder,i,INT_MAX);
    }

    TreeNode* build(vector<int> &A, int &i, int uBound){
        if(i == A.size() || A[i]>uBound) return NULL;
        TreeNode* node = new TreeNode(A[i++]);
        node->left = build(A, i ,node->val);
        node->right = build(A, i , uBound);
        return node;
    }
};