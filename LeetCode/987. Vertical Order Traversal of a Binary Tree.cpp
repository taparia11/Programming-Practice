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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
            return ans;

        map<int, map<int, multiset<int>>> mapp;
        queue<pair<TreeNode*,pair<int, int>>> q;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            TreeNode* node = it.first;
            int x = it.second.first, y = it.second.second;
            mapp[x][y].insert(node->val);
            if(node->left!=nullptr)
                q.push({node->left,{x-1,y+1}});
            if(node->right!=NULL)
                q.push({node->right,{x+1, y+1}});
        }

        for(auto p:mapp){
            vector<int> vertical;
            for(auto it:p.second)
                vertical.insert(vertical.end(),it.second.begin(), it.second.end());
            ans.emplace_back(vertical);
        }
        return ans;
    }
};