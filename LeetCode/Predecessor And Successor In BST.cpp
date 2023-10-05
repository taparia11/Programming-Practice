// Problem Link => https://www.codingninjas.com/studio/problems/predecessor-and-successor-in-bst_893049?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

/*************************************************************

    Following is the Binary Tree node structure
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };

*************************************************************/

int checkSuccessor(TreeNode* root, int key){
    int successor = -1;
    while(root){
        if(root->data<=key)
            root = root->right;
        else{
            successor = root->data;
            root = root->left;
        }
    }
    return successor;
}

int checkPredecessor(TreeNode* root, int key){
    int predecessor = -1;
    while(root){
        if(root->data>=key)
            root = root->left;
        else{
            predecessor = root->data;
            root = root->right;
        }
    }
    return predecessor;
}

pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
    int successor = checkSuccessor(root, key);
    int predecessor = checkPredecessor(root, key);
    
    return {predecessor, successor};
}