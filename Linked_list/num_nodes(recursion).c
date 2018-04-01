#include<stdio.h>
#include<stdlib.h>
void create();

void display();

typedef struct node{
int info;
struct node *next;

}node;
int number_of_nodes(node *);

node *start,*last;

int main()
{
 int ch,g,num;
 start=NULL;
 last=NULL;
 do{
 printf("\nmenu:");
 printf("\n1.create");
 printf("\n2.count number of nodes(recursively):");
 printf("\n3.display the list");
 printf("\nenter your choice:");
 scanf("%d",&ch);
 switch(ch){
     case 1: create(); break;
     case 2:num=number_of_nodes(start);
      printf("\n the number of nodes are:%d",num); break;
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



int number_of_nodes(node *start)
{
if(start==NULL){
    return 0;
}
else{
    return 1+(number_of_nodes(start->next));
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

