#include<iostream>
#include<stack>

using namspace std;
struct node{
	int info;
	struct node *left;
	struct node *right;
};


struct node * create(int);
void printSpiral(struct node *root){
	if(root == NULL)
		return;
	stack<struct node*> s1;
	stack<struct node*> s2;


	s1.push(root);
	while(!s1.empty() || !s2.empty())
		while(!s1.empty){
			struct node * temp= s1.top();
			s1.pop();
			cout<<temp->info<<" ";


		if(temp->right)
			s2.push(temp->right);
		if(temp->left)
			s2.push(temp->left);

	}


	while(!s2.empty){
			struct node * temp= s2.top();
			s2.pop();
			cout<<temp->info<<" ";


		if(temp->left)
			s1.push(temp->left);
		if(temp->right)
			s1.push(temp->right);

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
}