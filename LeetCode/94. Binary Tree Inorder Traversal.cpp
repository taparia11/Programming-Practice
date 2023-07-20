// Problem Link => https://leetcode.com/problems/binary-tree-inorder-traversal/description/

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
class Solution
{
public:
    // commented is recursive type solution
    // vector<int> tree;
    // void inorder(TreeNode* root){
    //     if(root==NULL)
    //         return;
    //     inorder(root->left);
    //     tree.push_back(root->val);
    //     inorder(root->right);
    // }
    vector<int> inorderTraversal(TreeNode *root)
    {
        // inorder(root);
        // return tree;
        if (root == NULL)
            return {};
        vector<int> inorder;
        stack<TreeNode *> st;
        TreeNode *node = root;
        while (true)
        {
            if (node != NULL)
            {
                st.push(node);
                node = node->left;
            }
            else
            {
                if (st.empty() == true)
                    break;
                node = st.top();
                st.pop();
                inorder.push_back(node->val);
                node = node->right;
            }
        }
        return inorder;
    }
};