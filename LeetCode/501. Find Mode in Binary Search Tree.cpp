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
class Solution
{
private:
    //Storing the value's
    vector<int> mode;
    int currCount = 0; // how many times same number repeated
    int currVal = 0;  // current value
    int maxCount = 0;   // max time a number occured

    void inOrder(TreeNode *root)
    {
        if (!root)
            return;
        inOrder(root->left);
        // if Node value is rqual to current value then increase current value count with 1 else set 1
        currCount = (root->val == currVal ? currCount + 1 : 1);
        // if current value count equal to max count means this number also occured same number of  time as max
        if (currCount == maxCount)
            mode.emplace_back(root->val); 
        // current value count > max count
        else if (currCount > maxCount)
        {
            // set max count = current count
            maxCount = currCount;
            // set vector to node value
            mode = {root->val};
        }
        // set current value equal to node value
        currVal = root->val;
        inOrder(root->right);
    }

public:
    vector<int> findMode(TreeNode *root)
    {
        inOrder(root);
        return mode;
    }
};