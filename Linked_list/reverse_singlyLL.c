//wap to reverse a singly linked list

#include<stdio.h>
void create();
void reverse_LL();
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
 printf("\n2.reverse the list");
 printf("\n3.display the list");
 printf("\nenter your choice:");
 scanf("%d",&ch);
 switch(ch){
     case 1: create(); break;
     case 2: reverse_LL(); break;
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


void reverse_LL()
{
    node *prev=NULL;
    node *current=start;
    node *temp;
    if(start==NULL){
        printf("\nempty list");
    }
    while(current!=NULL)
    {
        temp=current->next;
        current->next=prev;
        prev=current ;
        current=temp;
    }
start=prev;
}


void display()
{
    node *ptr;
    if(start==NULL){
        printf("the list is empty");

    }
    else{
            printf("\nthe list is:");
        ptr=start;
        while(ptr!=NULL){
            printf("%d->",ptr->info);
            ptr=ptr->next;
        }
    }

}
