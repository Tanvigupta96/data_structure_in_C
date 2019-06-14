#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
	
}*front=NULL,*rear=NULL;

void insert(int);
int delete_ele();
void display();

int main(){
	int ch,item;
	int a;

	printf("==Stacks using Linkedlist==");
	do{
	printf("\n1.insert");
	printf("\n2.delete");
	printf("\n3.display");
	printf("\nenter your choice");
scanf("%d",&ch);
switch(ch){
case 1:
scanf("%d",&item);
insert(item);
break;
case 2:
int val;
val=delete_ele();
printf("popped element is:%d\n",val);
break;
case 3:
display();
break;
default:printf("invalid choice");

}

printf("continue?");
scanf("%d",&a);
}while(a==1);
return 0;
}


void insert(int item){
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	if(newnode==NULL)
		printf("memory error" );
	else{
		newnode->data=item;
		newnode->next=NULL;
		if(front==NULL){
			front=newnode;
			rear=newnode;

		}
		else{
			rear->next=newnode;
			rear=newnode;
		}

	}
}

int delete_ele(){
	int val;
	if(front==NULL)
		printf("queue is empty");
	else{
	struct node  *temp=front;
	front=front->next;
	val=temp->data;
	free(temp);
}
return val;
}


void display(){
	int val;
	if(front==NULL)
		printf("queue is empty");
	else{
	struct node  *temp=front;
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
}
}
