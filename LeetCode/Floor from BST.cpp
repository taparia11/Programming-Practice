// Problem Link => https://www.codingninjas.com/studio/problems/floor-from-bst_625868?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

int Floor(BinaryTreeNode<int> *node, int input)
{
	// floor => Nearest smallest Interger
	int floor = -1;
	while(node){
		if(node->data == input){
			floor = node->data;
			return floor;
		}
		
		if(input > node->data){
			floor = node->data;
			node = node->right;
		}
		else
			node = node->left;
	}
	return floor;

}
