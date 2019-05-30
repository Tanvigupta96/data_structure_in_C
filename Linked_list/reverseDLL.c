//wap to reverse a doubly linked list:
#include <stdlib.h>
#include <cstdio>
struct node *create_list();
void display_list();
struct node *reverse_list();
using namespace std;
struct node{
	int data;
	struct node *next;
	struct node *prev;
};

struct node *head=NULL;

int main(){
	head=create_list();
	head=reverse_list();
	display_list();
return 0;
}


struct node * create_list(){
	int size;
	printf("enter size of the doubly linked list:");
	scanf("%d",&size);
	struct node *newnode, *temp;
	temp=head;
	for(int i=0;i<=(size-1);i++){
		newnode=(struct node *)malloc(sizeof(struct node));
		if(!newnode){
			printf("memory error");
			return head;
		}

		scanf("%d",&newnode->data);
		newnode->next=NULL;
		newnode->prev=NULL;
		if(head==NULL){
			head=newnode;
			temp=newnode;
		}
		else{
			temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;
		}

	}

	return head;
}



void display_list(){
	struct node *temp;
	temp=head;
	while(temp!=NULL){
		printf("%d->",temp->data );
		temp=temp->next;
	}
	printf("\n");


}

struct node * reverse_list(){
	struct node *current,*temp;
	current=head;
	if(current==NULL){
		printf("error,no elements to reverse");
	}

	if(current->next==NULL){
		printf("There is only one element in the list");
		
	}

	else{
		while(current!=NULL){
			temp=current->prev;
			current->prev=current->next;
			current->next=temp;
			current=current->prev;

		}
		if(temp!=NULL){
			temp=temp->prev;
		}
	}

	return temp;



}
