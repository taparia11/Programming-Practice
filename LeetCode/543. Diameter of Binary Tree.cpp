// Problem Link => https://leetcode.com/problems/diameter-of-binary-tree/description/

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
    int maxH = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        int val = binaryTreeDiameter(root);
        return maxH;
    }

    int binaryTreeDiameter(TreeNode* root){
        if(root == NULL)
            return 0;

        int lh = binaryTreeDiameter(root->left);
        int rh = binaryTreeDiameter(root->right);

        maxH = max(maxH, lh + rh);

        return 1 + max(lh, rh);
    }
};