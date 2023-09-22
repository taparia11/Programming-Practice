// Problem Link => https://leetcode.com/problems/count-complete-tree-nodes/description/

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

    int leftNodes(TreeNode* root){
       int height = 0;
       while(root){
           height++;
           root = root->left;
       } 
       return height;
    }

    int rightNodes(TreeNode* root){
        int height = 0;
        while(root){
            height++;
            root = root->right;
        }
        return height;
    }

    int countNodes(TreeNode* root) {
        if(root==NULL)
            return 0;
        int lC = leftNodes(root);
        int rC = rightNodes(root);

        if(lC == rC)    return (1<<lC) -1;

        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};