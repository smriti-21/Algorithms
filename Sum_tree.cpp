#include<bits/stdc++.h>
using namespace std;
void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

class Node
{
public:
	int data;
	Node *left,*right;	
};

Node* create(int val){
	Node *temp = new Node;
	temp->data = val;
	temp->left = NULL;
	temp->right = NULL;
}

int sum_tree(Node *root){
	if(root == NULL)
		return 0;
	int node_val = root->data;

	root->data = sum_tree(root->left) + sum_tree(root->right);

	return root->data + node_val;
}

void print_tree(Node *node){
	if(node == NULL)
		return;
	cout<<node->data<<endl;
	print_tree(node->left);
	print_tree(node->right);
}
int main()
{
	init_code();
	Node *root = create(10);
	root->left = create(-2);
	root->right = create(6);
	root->left->left = create(8);
	root->left->right = create(-4);
	root->right->left = create(7);
	root->right->right = create(5);
	sum_tree(root);
	print_tree(root);
}
