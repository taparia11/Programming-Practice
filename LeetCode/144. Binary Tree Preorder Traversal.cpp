// Problem Link => https://leetcode.com/problems/binary-tree-preorder-traversal/description/

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

// commented is recursive type solution
    // vector<int> tree;
    // void preorder(TreeNode* root) {
    //     if(root==NULL)
    //         return;
    //     tree.emplace_back(root->val);
    //     preorderTraversal(root->left);
    //     preorderTraversal(root->right);
    // }

    vector<int> preorderTraversal(TreeNode* root) {
        // preorder(root);
        // return tree;
        if(root==NULL)
            return {};
        vector<int> arr;
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty()){
            root = s.top();
            s.pop();
            arr.push_back(root->val);
            if(root->right!=NULL){
                s.push(root->right);
            }
            if(root->left!=NULL)
                s.push(root->left);
        }
        return arr;
    }
};