//wap to eliminate duplicate nodes from a singly lined list.
#include<stdio.h>
#include<stdlib.h>
void create();
void delete_duplicate_nodes();
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
 printf("\n2.delete the duplicate nodes in the linked list");
 printf("\n3.display the list");
 printf("\nenter your choice:");
 scanf("%d",&ch);
 switch(ch){
     case 1: create(); break;
     case 2: delete_duplicate_nodes(); break;
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


void delete_duplicate_nodes()
{
    node *ptr1,*ptr2,*temp;
    ptr1=start;
    ptr2=ptr1->next;
    while(ptr1!=NULL && ptr2!=NULL){
            if(ptr1->info == ptr2->info)
            {
                ptr1->next=ptr2->next;
                temp=ptr2;
                printf("\n the duplicated node with info %d is deleted",temp->info);
                free(temp);
                ptr1=ptr1->next;
                ptr2=ptr1->next;
            }
            else{
                ptr1=ptr1->next;
                ptr2=ptr2->next;
            }

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
