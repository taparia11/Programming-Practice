// Problem Link => https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/description/

// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:

//     TreeNode* build(vector<int>& preorder, int preStart, int preEnd, vector<int> inorder, int inStart, int inEnd, unordered_map<int, int> inMap){
//         if(preStart > preEnd || inStart > inEnd)
//             return NULL;

//         TreeNode* root = new TreeNode(preorder[preStart]);
//         int inRoot = inMap[root->val];
//         int numLeft = inRoot - inStart;

//         root->left = build(preorder,preStart+1, preStart + numLeft, inorder, inStart, inRoot - 1, inMap);

//         root->right = build(preorder , preStart + numLeft + 1, preEnd,inorder , inRoot+1, inEnd, inMap);

//         return root;
//     }
//     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//         unordered_map<int, int> inMap;
//         for(int i=0; i<inorder.size(); i++){
//             inMap[inorder[i]] = i;
//         }

//         return build(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,inMap);
        
//     }
// };

class Solution {
    void createMap(vector<int> &in, unordered_map<int,int> &map, int &n){
        for(int i=0; i<n; i++){
            map[in[i]] = i;
        }
    }

    TreeNode* build(vector<int> &pre, vector<int> &in, int &index, int inStart, int inEnd, int &n, unordered_map<int,int> &map){
        if(index>=n || inStart>inEnd) return NULL;

        int element = pre[index++];
        TreeNode* root = new TreeNode(element);
        int pos = map[element];

        root->left = build(pre,in,index,inStart,pos-1,n,map);
        root->right = build(pre,in,index,pos+1,inEnd,n,map);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIndex = 0;
        int n = preorder.size();
        unordered_map<int,int> mapping;
        createMap(inorder,mapping,n);
        return build(preorder,inorder,preIndex,0,n-1,n,mapping);
    }
};