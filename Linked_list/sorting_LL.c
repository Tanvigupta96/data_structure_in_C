//wap to sort elements of a singly linked list
#include<stdio.h>
#include<stdlib.h>
void create();
void sort_LL();
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
 printf("\n2.sort the linked list");
 printf("\n3.display the list");
 printf("\nenter your choice:");
 scanf("%d",&ch);
 switch(ch){
     case 1: create(); break;
     case 2: sort_LL(); break;
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


void sort_LL()
{
    int swapped,i;
    node *ptr;
    node *lptr=NULL;
    do{
    swapped =0;
    ptr=start;
    while(ptr->next!=lptr)
    {
        if(ptr->next->info< ptr->info )
        {

            swap(ptr,ptr->next);
            swapped=1;
        }
        ptr=ptr->next;

    }lptr=ptr;
    }while(swapped);

}


/* function to swap data of two nodes a and b*/
void swap(node *a,node *b)
{
    int temp = a->info;
    a->info = b->info;
    b->info = temp;
}


void display()
{
    node *ptr;
    if(start==NULL){

        printf("\n the list is empty");
    }
    else{
            printf("\nthe sorted list is:");
        ptr=start;
        while(ptr!=NULL){
        printf("%d->",ptr->info);
    ptr=ptr->next;
        }
    }
}
