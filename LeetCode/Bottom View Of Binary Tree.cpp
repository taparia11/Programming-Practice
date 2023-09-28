// Problem Link => https://www.codingninjas.com/studio/problems/bottom-view-of-binary-tree_893110?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include<map>
// #include<
vector<int> bottomView(TreeNode<int> * root){
    // Write your code here.

    vector<int> ans;
    
    if(root == NULL)
        return ans;
    
    map<int, int> mapp;
    queue<pair<TreeNode<int>*,int>> q;
    q.push({root, 0});
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        
        TreeNode<int>* node = it.first;
        int x = it.second;

        mapp[x] = node->data;

        if(node->left!=NULL)    q.push({node->left, x-1});
        if(node->right!=NULL)   q.push({node->right, x+1});
        
    }

    for(auto it:mapp){
        ans.push_back(it.second);
    }
    return ans;
    
}
