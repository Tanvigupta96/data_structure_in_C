#include<cstdio>
#include <stdlib.h> 
#include<stdbool.h>

struct node{
	int info;
	struct  node* left;
	struct node* right;
};


void printfSpiral(struct node *);
void printGivenLevel(struct node *,int ,int);
int height(struct node *);
struct node* create(int);



void printfSpiral(struct node* root){
	int h=height(root);
	printf("%d\n",h);

	int i;
	bool ltr = false;
	for(int i=1;i<=h;i++){
		printGivenLevel(root,i,ltr);
		ltr=!ltr;
	}

}

void printGivenLevel(struct node* root,int level,int ltr){
	if(root == NULL)
		return;

	
	if(level == 1)
		printf("%d",root->info);

	else if(level >1){
		if(ltr){

			printGivenLevel(root->left,level-1,ltr);
			printGivenLevel(root->right,level-1,ltr);
		}
		else{
			printGivenLevel(root->right,level-1,ltr);
			printGivenLevel(root->left,level-1,ltr);
		}
	}
}


int height(struct node* node){
	if(node == NULL){
		return 0;
	}
	else{
		int leftheight = height(node->left);
		int rightheight = height(node->right);

		if(leftheight > rightheight)
			return leftheight + 1;
		else
			return rightheight + 1;

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
	struct node *root = create(1);
	root->left = create(2);
	root->right = create(3);
	root->left->left = create(7);
	root->left->right = create(8);
	root->right->left = create(5);
	root->right->right = create(4);
	printfSpiral(root);
}

