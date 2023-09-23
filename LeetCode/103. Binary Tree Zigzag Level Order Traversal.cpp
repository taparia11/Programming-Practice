// Problem Link => https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if(root == NULL)
            return ans;

        queue<TreeNode *> q;
        q.push(root);
        bool flag = true;
        while(!q.empty()){
            int qSize = q.size();
            vector<int> level(qSize);

            for(int i=0;i<qSize;i++){
                root = q.front();
                q.pop();
                int index = flag ? i : (qSize - 1 - i);
                level[index] = root->val;
                if(root->left != NULL)  q.push(root->left);
                if(root->right != NULL) q.push(root->right);
            }
            flag = !flag;
            ans.emplace_back(level);
        }
        return ans;
    }
};