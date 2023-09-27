// Problem Link => https://leetcode.com/problems/maximum-width-of-binary-tree/description/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     unsigned int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(unsigned int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(unsigned int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    unsigned int widthOfBinaryTree(TreeNode* root) {
        unsigned int ans = 0;
        if(root==NULL)
            return ans;
        // used pair to store node and index
        queue<pair<TreeNode*,unsigned int>> q;
        q.push({root,0});
        while(!q.empty()){
            unsigned int size = q.size();
            // always give parent index = assign 1 as index number on every level
            unsigned int mmin = q.front().second;
            unsigned int first,last;
            for( int i=0;i<size;i++){
                // through this curr we will assign index to chile nodes
                unsigned int curr = q.front().second-mmin;
                TreeNode* node = q.front().first;
                q.pop();
                if(i == 0)    first = curr;
                if(i == size-1) last = curr;
                if(node->left!=NULL)    q.push({node->left,2*curr+1});
                if(node->right!=NULL)    q.push({node->right,2*curr+2});
            
            }
            // this will give us the all the nodes between first and last node using index number
            ans = max(ans,last-first+1);
        }
        return ans;
    }
};