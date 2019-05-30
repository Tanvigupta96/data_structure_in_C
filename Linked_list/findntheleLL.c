//Write a code to find nth element from last:
#include<cstdio>
#include<stdlib.h>
struct node * create_list(struct node *); 
int find_nth_ele(struct node *,int);
using namespace std;
struct node
{
	int item;
	struct node *next;
	
};

int main(){
	int n,ele;
	struct node *head = NULL;
	head=create_list(head);
	printf("which nth element you want to find from last? :");
	scanf("%d",&n);
	ele=find_nth_ele(head,n);
	printf("%d\n",ele );
	return 0;
}

struct node * create_list(struct node *head){
	struct node *newnode,*temp;
	temp=head;


for(int i=0;i<=3;i++){
	newnode=(struct node *)malloc(sizeof(struct node));
	if(!newnode){
		printf("memory error");
		return head;
	}
	newnode->item=i;
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
		temp=head;
	}
	else{
		temp->next=newnode;
		temp=newnode;

	}
	printf("%d->",newnode->item);
	}
	return head;
	}

int find_nth_ele(struct node *head,int n){
//code to find nth element from the last
	int length=1,pos=0,ctr=0; //number of nodes
	struct node *temp,*temp1;
	temp=head;
	temp1=head;
	while(temp->next!=NULL){
		temp=temp->next;
		length++;
	}

  pos=length-n;
  while(ctr<pos){
  	temp1=temp1->next;
  	ctr++;
  }

  return temp1->item;


	      
}
