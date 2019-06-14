//Remove duplicates from an unsorted doubly linked list
#include<iostream>
#include<cstdlib>
struct node * create_list();
void display_list();
struct node * remove_duplicates();
using namespace std;
struct node {
	int val;
	node *next;
	node *prev;

};

node *head=NULL;

int main(){
head=create_list();
display_list();
head=remove_duplicates();
display_list();
return 0;
}



struct node * create_list(){
	 node *newnode,*temp;
	temp=head;
	int size,num;
	cin>>size;
	for(int i=0;i<size;i++){
		newnode=(struct node *)malloc(sizeof(struct node));
		if(newnode==NULL){
			printf("memory error");
		}
	cin>>num;
	newnode->val=num;
	newnode->next=NULL;
	newnode->prev=NULL;

	if(head==NULL){
		head=newnode;
		temp=newnode;

	}
	else{
		newnode->prev=temp;
		temp->next=newnode;
		temp=newnode;

	}	

}

return head;

}


void display_list(){
	struct node *temp=head;
	while(temp!=NULL){
		printf("%d->",temp->val);
		temp=temp->next;
	}
	printf("\n");
}


struct node * remove_duplicates(){
	node *temp,*temp1;
	temp=head;
	for(temp=head;temp!=NULL;temp=temp->next){
		temp1=temp->next;
		 while(temp1!=NULL){
			if(temp->val==temp1->val){
				struct node *next=temp1->next;
				node *dup=temp1;
				if(dup->next!=NULL){
					dup->next->prev=dup->prev;
				}
				if(dup->prev!=NULL){
					dup->prev->next=dup->next;

				}
				free(dup);
				temp1=next;
				}
			else{
				temp1=temp1->next;
			}
		}
		
	}
	
return head;


}


