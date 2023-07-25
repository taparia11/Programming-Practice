// Problem Link => https://leetcode.com/problems/binary-tree-postorder-traversal/

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
    // vector<int> post;
    // void postorder(TreeNode* root){
    //     if(root==NULL)
    //         return ;
    //     postorder(root->left);
    //     postorder(root->right);
    //     post.push_back(root->val);
    // }

    vector<int> postorderTraversal(TreeNode *root)
    {
        // postorder(root);
        // return post;
        vector<int> post;
        if (root == NULL)
            return post;
        stack<TreeNode *> st1, st2;
        st1.push(root);
        while (!st1.empty())
        {
            root = st1.top();
            st1.pop();
            st2.push(root);
            if (root->left != NULL)
                st1.push(root->left);
            if (root->right != NULL)
                st1.push(root->right);
        }
        while (!st2.empty())
        {
            post.push_back(st2.top()->val);
            st2.pop();
        }
        return post;
    }
};