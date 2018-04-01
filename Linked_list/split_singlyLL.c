//wap to split linked list into 2 subsets.split at middle position
#include<stdio.h>
#include<stdlib.h>
void create();
void split_LL();
void display();

typedef struct node{
int info;
struct node *next;

}node;

node *start,*last;

int main()
{
 int ch,g;
 start=NULL;
 last=NULL;
 do{
 printf("\nmenu:");
 printf("\n1.create");
 printf("\n2.split the linkedlist into 2 subsets");
 printf("\n3.display the list");
 printf("\nenter your choice:");
 scanf("%d",&ch);
 switch(ch){
     case 1: create(); break;
     case 2: split_LL(); break;
     case 3: display(); break;
     default: printf("\nsorry,you have entered a wrong choice:");
 }
 printf("\n do u want to continue?");
 scanf("%d",&g);
 }while(g);
 return 0;
}



void create()
{
    node *temp;
    temp=(node *)malloc(sizeof(node));
    if(temp==NULL){
        printf("\nout of memory");

    }
    printf("\nenter the info part of the node:");
    scanf("%d",&temp->info);
    temp->next=NULL;
    if(start==NULL){
        start=temp;
        last=temp;
    }

    else{
        last->next=temp;
        last=temp;
    }


}



void split_LL()
{
    node *ptr1,*ptr2,*ptr3;
    ptr1=start;
    ptr2=start;
    while(ptr2!=NULL && ptr2->next!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next->next;
    }
    printf("\n the middle element is:%d",ptr1->info);
    ptr3=ptr1->next;
    ptr1->next=NULL;
    ptr1=start;
    printf("\n the first part of the linked list is:");
    while(ptr1->next!=NULL){
        printf("%d->",ptr1->info);
        ptr1=ptr1->next;
    }
    printf("\n the second part of the linked list is:");
    while(ptr3!=NULL){
        printf("%d->",ptr3->info);
        ptr3=ptr3->next;
    }
}



void display()
{
    node *ptr;
    if(start==NULL){

        printf("\n the list is empty");
    }
    else{
            printf("\nthe list you entered is:");
        ptr=start;
        while(ptr!=NULL){
        printf("%d->",ptr->info);
    ptr=ptr->next;
        }
    }
}
