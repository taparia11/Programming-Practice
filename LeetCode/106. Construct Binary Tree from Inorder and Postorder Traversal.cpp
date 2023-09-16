// Problem Link => https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/description/


class Solution {
public:
    TreeNode* _buildTree(int inStart, int inEnd, int postStart, int postEnd, vector<int>& inorder, vector<int>& postorder, unordered_map<int, int>& indexMap) {
        if(inStart > inEnd || postStart > postEnd) return NULL;
        TreeNode* curr = new TreeNode(postorder[postEnd]);
        int split = indexMap[postorder[postEnd]];
        int leftElements = split - inStart;
        int rightElements = inEnd - split;
        curr->left = _buildTree(inStart, inStart + leftElements-1, postStart, postStart + leftElements-1, inorder, postorder, indexMap);
        curr->right = _buildTree(inEnd-rightElements+1, inEnd, postEnd-rightElements, postEnd-1, inorder, postorder, indexMap);
        return curr;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int, int> indexMap;
        for(int i = 0 ; i < inorder.size(); i++)
            indexMap[inorder[i]] = i;
        return _buildTree(0, inorder.size()-1, 0, inorder.size()-1, inorder, postorder, indexMap);
    }
};