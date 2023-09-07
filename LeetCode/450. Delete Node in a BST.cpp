// Problem Link => https://leetcode.com/problems/delete-node-in-a-bst/description/

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

    // This function will help to link node of one side to other side-end
    TreeNode* linker(TreeNode* root){
        if(root->left==NULL)
            return root->right;
        else if(root->right==NULL)
            return root->left;
        
        TreeNode* rightChild = root->right;
        TreeNode* leftlastChild = lastChild(root->left);
        leftlastChild->right = rightChild;
        return root->left;
    }

    // this will help to find last right node
    TreeNode* lastChild(TreeNode* root){
        while(root->right!=NULL)
            root = root->right;
        return root;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)
            return NULL;
        if(root->val==key)
            return linker(root);
        TreeNode* node = root;
        while(root!=NULL){
            if(root->val>key){
                if(root->left!=NULL && root->left->val==key){
                    root->left = linker(root->left);
                    break;
                }
                else
                    root = root->left;
            }
            else{
                if(root->right!=NULL && root->right->val==key){
                    root->right = linker(root->right);
                    break;
                }
                else{
                    root = root->right;
                }
            }
        }
        return node;
    }
};