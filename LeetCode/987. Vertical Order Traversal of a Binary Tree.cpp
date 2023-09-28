// Problem Link => https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/description/

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

    vector<int> ans;

    void rightView(TreeNode* root, int level){
        if(root==nullptr)
            level = level;
        
        if(level == ans.size())
            ans.emplace_back(root->val);
        
        if(root->right)
            rightView(root->right,level+1);
        if(root->left)
            rightView(root->left,level+1);
    }

    vector<int> rightSideView(TreeNode* root) {

//  Recursive Solution
        if(root==NULL)
            return ans;

        rightView(root,0);
        return ans;


 // Itretive Solution
        // vector<int> ans;
        // if(root==nullptr)
        //     return ans;
        // // stack<TreeNode*> st;
        // queue<TreeNode*> q;
        // q.push(root);
        // while(!q.empty()){
        //     int qSize = q.size();
        //     int value;
        //     for(int i=0;i<qSize;i++){
        //         auto it = q.front();
        //         q.pop();
        //         if(it->left!=nullptr)
        //             q.push(it->left);
        //         if(it->right!=NULL)
        //             q.push(it->right);
        //         value = it->val;
        //     }
        //     ans.push_back(value);
        // }
        // return ans;
    }
};