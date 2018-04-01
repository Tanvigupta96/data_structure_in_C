//wap to find middle element in singly linkedlist without using unit value.
#include<stdio.h>
#include<stdlib.h>
void create();
void middle_ele();
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
 printf("\n2.find middle element in the list");
 printf("\n3.display the list");
 printf("\nenter your choice:");
 scanf("%d",&ch);
 switch(ch){
     case 1: create(); break;
     case 2: middle_ele(); break;
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


void middle_ele()
{
    node *p,*q;
    p=start;
    q=start;
    while(q!=NULL && q->next!=NULL){
        p=p->next;
        q=q->next->next;

    }

    printf("\n the middle element is:%d",p->info);
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
