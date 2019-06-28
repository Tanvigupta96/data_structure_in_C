#include<cstdio>
#include<stdlib.h>

struct node{
	int info;
	struct node *left;
	struct node *right;

};

struct node * create(struct node *);
int toSumTree(struct node *);
void printInOrder(struct node *);


int toSumTree(struct node * Node){
	if(Node == NULL)
		return 0;
	int old_value = Node->info;

	Node->info  = toSumTree(Node->left) + toSumTree(Node->right);

	return Node->info + old_value;

}

void printInOrder(struct node *root){
	if(root == NULL)
		return ;
	printInOrder(root->left);
	printf("%d\t",root->info );
	printInOrder(root->right);

}



struct node * create(int n){
	struct node *newnode = (struct node * )malloc(sizeof(struct node));
	newnode->info = n;
	newnode->left = NULL;
	newnode->right = NULL;
	return(newnode);
}


int main(){
	struct node * root =create(10);
	root->left=create(-2);
	root->left->left=create(8);
	root->left->right=create(-4);
	root->right=create(6);
	root->right->left=create(7);
	root->right->right=create(5); 
	toSumTree(root);
	printInOrder(root);
return 0;
}