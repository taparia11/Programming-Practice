// Problem Link => https://www.codingninjas.com/studio/problems/boundary-traversal-of-binary-tree_790725?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=3

/************************************************************

    Following is the Binary Tree node structure:

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode()
        {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/

bool isLeaf(TreeNode<int>* root){
    if(root->left != NULL || root->right != NULL)
        return false;
    return true;
}

void leftNodes(TreeNode<int>* root, vector<int>& ans){
    TreeNode<int>* curr = root->left;
    while(curr){
        if(!isLeaf(curr))
            ans.push_back(curr->data);
        if(curr->left!=NULL)
            curr = curr->left;
        else
            curr = curr->right;
    }
}

void rightNodes(TreeNode<int>* root, vector<int>& ans){
    TreeNode<int>* curr = root->right;
    vector<int> temp;
    while(curr){
        if(!isLeaf(curr))   temp.push_back(curr->data);
        if(curr->right != NULL)     curr = curr->right;
        else
            curr = curr->left;
    }

   for(int i=temp.size()-1;i>=0;i--){
       ans.push_back(temp[i]);
   }
}

void leafNodes(TreeNode<int>* root, vector<int>& ans){
    if(isLeaf(root)){
        ans.push_back(root->data);
        return;
    }

    if(root->right) leafNodes(root->right, ans);
    if(root->left)  leafNodes(root->left, ans);
}

vector<int> traverseBoundary(TreeNode<int> *root)
{
    vector<int> ans;
    if(root==NULL)
        return ans;

    if(!isLeaf(root))
        ans.push_back(root->data);

    leftNodes(root, ans);
    leafNodes(root, ans);
    rightNodes(root, ans);
        
}
