// Problem Link => https://leetcode.com/problems/find-largest-value-in-each-tree-row/

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
    vector<int> largestValues(TreeNode* root) {
        if(root==NULL)
            return {};
        vector<int> ans;
        queue<TreeNode*> Q;
        Q.push(root);
        while(!Q.empty()){
            int qSize = Q.size();
            vector<int> ds;
            for(int i=0; i<qSize; i++){
                TreeNode* node = Q.front();
                Q.pop();
                if(node->left!=NULL)    Q.push(node->left);
                if(node->right!=NULL)    Q.push(node->right);
                ds.push_back(node->val);
            }
            int m = *max_element(ds.begin(),ds.end());
            ans.push_back(m);
        }
        return ans;
    }
};