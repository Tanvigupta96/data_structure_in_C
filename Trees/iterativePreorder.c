#include<iostream>
#include <stdlib.h> 
#include <stack> 
using namespace std;
struct node{
	int info;
	struct  node* left;
	struct node* right;
};


void preorderTraveral(struct node *root){

	if(root == NULL)
		return
	stack<node *>s1;
	s1.push(root);

	while(!s1.empty()){
		struct node *temp = s1.top();
		cout<<temp->info<<" ";
		s1.pop();
		
		if(temp->right)
			s1.push(temp->right);
		if(temp->left)
			s1.push(temp->left);

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
	preorderTraveral(root);
}
