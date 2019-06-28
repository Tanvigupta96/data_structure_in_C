#include<cstdio>
#include<stdlib.h>
struct node{
	int info;
	struct node *left;
	struct node *right;
};

struct node *create(int);
float calculateDepth(struct node *);
int calHeight(struct node *);
int calSize(struct node *);




float calculateDepth(struct node *root){
	
	if(root == NULL)
		return 0;
	else
		return float(calSize(root))/float(calHeight(root));
}

int calSize(struct node *root){
	
	if(root == NULL)
		return 0 ;
	else
		return (1+calSize(root->left)+calSize(root->right));


	
}

int calHeight(struct node *root){
	if(root == NULL)
		return 0;
	else{
		int leftHeight = calHeight(root->left);
		int rightHeight = calHeight(root->right);

	if(leftHeight < rightHeight)
		return rightHeight+1;
		
	else
		return leftHeight+1;
		
	}
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
	struct node *root=create(10);
	root->left=create(20);
	root->right=create(30);
	float d=calculateDepth(root);
	printf("%f\n",d);
}