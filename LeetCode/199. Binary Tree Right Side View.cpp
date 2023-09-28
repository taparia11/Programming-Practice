// Problem Link => https://leetcode.com/problems/binary-tree-right-side-view/description/

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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(root==nullptr)
            return ans;
        // stack<TreeNode*> st;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int qSize = q.size();
            int value;
            for(int i=0;i<qSize;i++){
                auto it = q.front();
                q.pop();
                if(it->left!=nullptr)
                    q.push(it->left);
                if(it->right!=NULL)
                    q.push(it->right);
                value = it->val;
            }
            ans.push_back(value);
        }
        return ans;
    }
};