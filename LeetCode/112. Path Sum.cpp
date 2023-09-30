// Problem Link => https://leetcode.com/problems/path-sum/description/

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
    bool res = false;
    bool getPath(TreeNode * root, int sum, int targetSum, vector<int>& ans){
        if(root==NULL)
            return false;
        ans.push_back(root->val);
        sum = sum + root->val;
        if(targetSum==sum && root->left==NULL && root->right==NULL){
            // res = true;
            return true;
        }
        
        if(getPath(root->left, sum, targetSum, ans) || getPath(root->right, sum, targetSum, ans))
            return true;
        
        sum = sum - ans[ans.size()-1];
        ans.pop_back();
        return false;
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        vector<int> ans;
        int sum = 0;
          return getPath(root, sum, targetSum, ans);
        
        
    }
};