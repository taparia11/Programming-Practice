// Problem Link => https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description/

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

class BSTIterator{
private:
    stack<TreeNode*> st;

    // bool reverse = true; => it will go to next element
    // bool reverse = false; => it will go to previous element

    bool reverse;

    void pushAll(TreeNode* root){
        for( ; root!=NULL; ){
            if(reverse==true){
                st.push(root);
                root = root->left;
            }
            else{
                st.push(root);
                root = root->right;
            }
        }
    }

public:

    BSTIterator(TreeNode* root, bool isreverse){
        reverse = isreverse;
        pushAll(root);
    }

    int next(){
        TreeNode* node = st.top();
        st.pop();
        if(reverse==true)
            pushAll(node->right);
        else
            pushAll(node->left);
        
        return node->val;
    }
    
};

class Solution {
public:
    
    bool findTarget(TreeNode* root, int k) {
        BSTIterator l(root, true);
        BSTIterator r(root, false);

        int i = l.next();
        int j = r.next();

        while(i<j){
            if(i+j==k)
                return true;
            else if(i+j<k)
                i = l.next();
            else
                j = r.next();
        }
        return false;
    }
};