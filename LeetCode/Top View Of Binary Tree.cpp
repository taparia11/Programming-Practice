// Problem Link => https://www.codingninjas.com/studio/problems/top-view-of-binary-tree_799401?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T dat)
        {
            this->data = dat;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include<map>
vector<int> getTopView(TreeNode<int> *root)
{
    vector<int> ans;
    if(root==NULL)
        return ans;
    
    map<int,int> mpp;
    queue<pair<TreeNode<int> *, int>> q;
    q.push({root, 0});

    while(!q.empty()){
        auto it = q.front();
        q.pop();

        TreeNode<int>* node = it.first;
        int line = it.second;

        if(mpp.find(line)==mpp.end())   
            mpp[line] = node->data;
            

        if(node->left!=NULL)
            q.push({node->left, line-1});

        if(node->right!=NULL)
            q.push({node->right, line+1});
    }

    for(auto it:mpp)
        ans.push_back(it.second);

    return ans;
}
