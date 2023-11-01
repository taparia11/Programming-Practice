// Problem Link => https://leetcode.com/problems/find-mode-in-binary-search-tree/description/

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
private:
    vector<int> mode;
    int currCount = 0;
    int currVal = 0;
    int maxCount = 0;

    void inOrder(TreeNode* root){
        if(!root)
            return;
        inOrder(root->left);
        currCount = (root->val == currVal? currCount+1:1);
        if(currCount == maxCount)
            mode.emplace_back(root->val);
        else if(currCount > maxCount){
            maxCount = currCount;
            mode = {root->val};
        }
        currVal = root->val;
        inOrder(root->right);
    }
public:
    vector<int> findMode(TreeNode* root) {
        inOrder(root);
        return mode;
    }
};