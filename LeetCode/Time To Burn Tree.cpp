// Problem Link => https://www.codingninjas.com/studio/problems/time-to-burn-tree_1469067?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

/************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) 
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include "unordered_map"
BinaryTreeNode<int>* getParent(int start, BinaryTreeNode<int>* root, unordered_map<BinaryTreeNode<int>*, BinaryTreeNode<int>*> &parent){
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    BinaryTreeNode<int>* res;
    while(!q.empty()){
            BinaryTreeNode<int>* curr = q.front();
            q.pop();
            if(curr->left){
                parent[curr->left] = curr;
                q.push(curr->left);
            }
            if(curr->right){
                parent[curr->right] = curr;
                q.push(curr->right);
            }
            if(start == curr->data)
                res = curr;
        
    }
    return res;
}

int burnTime(BinaryTreeNode<int>* node, unordered_map<BinaryTreeNode<int>*, BinaryTreeNode<int>*> parent){
    unordered_map<BinaryTreeNode<int>* , bool> visited;
    queue<BinaryTreeNode<int>*> q;
    q.push(node);
    visited[node] = true;
    int time = 0;
    while(!q.empty()){
        int size = q.size();
        bool flag = false;
        for(int i=0; i<size; i++){
            BinaryTreeNode<int>* curr = q.front();
            q.pop();
            if(curr->left && !visited[curr->left]){
                q.push(curr->left);
                visited[curr->left] = true;
                flag = true;
            }
            if(curr->right && !visited[curr->right]){
                q.push(curr->right);
                visited[curr->right] = true;
                flag = true;
            }
            if(parent[curr] && !visited[parent[curr]]){
                q.push(parent[curr]);
                visited[parent[curr]] = true;
                flag = true;
            }

        }
            if(flag)
                time++;
    }
    return time;
}

int timeToBurnTree(BinaryTreeNode<int>* root, int start)
{
    unordered_map<BinaryTreeNode<int>* , BinaryTreeNode<int>*> parent;

    BinaryTreeNode<int>* node = getParent(start, root,parent);
    int time = burnTime(node, parent);
    return time;
    // Write your code here
}
