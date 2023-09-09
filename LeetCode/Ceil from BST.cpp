// Problem Link => https://www.codingninjas.com/studio/problems/ceil-from-bst_920464?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/
/*
    Time complexity: O(logN)
    Space complexity: O(logN)

    Where 'N' is the number of nodes of the tree
*/

int findCeil(BinaryTreeNode < int > * node, int x) {
  // Initializing ceil value
  int ceil = -1;

  // Traverse till the node is not null
  while (node != NULL) {

    // If node value equals key then return it
    if (x == node -> data) {
      return node -> data;
    }

    // Traverse right sub-tree
    if (x > node -> data) {

      node = node -> right;
    }

    // Traverse left sub-tree
    else {
      ceil = node -> data;
      node = node -> left;
    }
  }

  // Return the ceil value
  return ceil;

}