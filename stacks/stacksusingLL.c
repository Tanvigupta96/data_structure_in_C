//wap to implement stacks using Linkedlist:
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};

struct node *top=NULL;

void push(int item){
struct node *newnode=(struct node *)malloc(sizeof(struct node));
if(newnode==NULL)
	printf("Memory error");

newnode->data=item;
newnode->next=NULL;
if(top==NULL)
	top=newnode;

else{
	newnode->next=top;
	top=newnode;
}
}	


void traverse(){
	if(top==NULL)
		printf("the list is empty");
	
	else{
		struct node *temp=top;
		while(temp!=NULL){
			printf("%d->",temp->data);
			temp=temp->next;
		}
	}
}


int pop(){
	int val;
	if(top==NULL)
		printf("the list is empty,nothing to pop");
	else{
		
		node *temp=top;
		top=top->next;
		val=temp->data;
		free(temp);
	}
return val;
}

int main(){
	int ch,item;
	int a;

	printf("==Stacks using Linkedlist==");
	do{
	printf("\n1.Push");
	printf("\n2.pop");
	printf("\n3.traversal");
	printf("\nenter your choice");
scanf("%d",&ch);
switch(ch){
case 1:
scanf("%d",&item);
push(item);
break;
case 2:
int val;
val=pop();
printf("popped element is:%d\n",val);
break;
case 3:
traverse();
break;
default:printf("invalid choice");

}

printf("continue?");
scanf("%d",&a);
}while(a==1);




return 0;
}

