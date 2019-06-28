#include<cstdio>
#include <stdlib.h> 

struct node {
 	int info;
 	struct node *left;
 	struct node *right;
};
struct node* create(int);


void printLeaves(struct node *root){
		if(root){
			printLeaves(root->left);


			if(!root->left && !root->right)
				printf("%d\t",root->info );
			printLeaves(root->right);

		}


}

void printBoundaryLeft(struct node *root){
	if(root){
		if(root->left){
			printf("%d\t",root->info);
			printBoundaryLeft(root->left);
		}
		else if(root->right){
			printf("%d\t",root->info );
			printBoundaryLeft(root->right);
		}

		// do nothing if it is a leaf node, this way we avoid 
        // duplicates in output 
	}
}


void printBoundaryRight(struct node *root){
	if(root){
		if(root->right){
			printBoundaryRight(root->right);
			printf("%d\t",root->info );
		}
		if(root->left){
			printBoundaryRight(root->left);
			printf("%d\t",root->info);

		}
	}





}

void printBoundary(struct node *root){
	if(root)
		printf("%d\t",root->info);

	printBoundaryLeft(root->left);

	//print all leaf nodes

	printLeaves(root->left);
	printLeaves(root->right);

	printBoundaryRight(root->right);


}


struct node* create(int n)
{
	struct node *newnode = (struct node * )malloc(sizeof(struct node));
	newnode->info = n;
	newnode->left = NULL;
	newnode->right = NULL;
	return(newnode);
}




int main(){
	struct node *root= create(20);

	root->left=create(8);
	root->right=create(22);
	root->left->left = create(4);
	root->left->right = create(12);
	root->left->right->left = create(10);
	root->left->right->right = create(14);
	root->right->right=create(25);

	printBoundary(root);
}