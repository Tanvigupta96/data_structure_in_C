//queue implementation using linkedlist
#include<stdio.h>
#include<stdlib.h>
void insertion();
void deletion();
void display();
typedef struct node{
    int info;
    struct node *next;
}node;

node *front=NULL;
node *rear=NULL;
int main()
{
    int ch,g;
    do
    {
    printf("menu:");
    printf("\n1.insert element into the queue");
    printf("\n2.delete element from the queue");
    printf("\n3.display the elements of the queue");
    printf("\nenter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: insertion(); break;
        case 2: deletion(); break;
        case 3: display(); break;
        default: printf("\nsorry,u have entered a wrong choice"); break;
    }
    printf("\n do u want to continue:");
    scanf("%d",&g);

}while(g);
return 0;
}



void insertion(){
    node *temp;
    temp=(node *)malloc(sizeof(node));
    if(temp==NULL){
        printf("\nout of memory");
    }

    printf("\nenter the data part of the temp:");
    scanf("%d",&temp->info);
    temp->next=NULL;
    if(rear==NULL){
        front=temp;
        rear=temp;
    }

    else{
        rear->next=temp;
        rear=temp;
    }
}




void deletion(){
    node *temp;
    if(front==NULL){
        printf("\nthe queue is empty");
    }

    else if(front==rear){
    printf("\nthe element you deleted is:%d",front->info);
        front=NULL;
        rear=NULL;
    }
    else{
    temp=front;
    printf("\nthe element you deleted is:%d",front->info);
    front=front->next;
    free(temp);
    }
}



void display(){
    node *ptr;
    if(front==NULL && rear==NULL){
        printf("\n the queue is empty");
    }

    else{
    printf("\nthe elements of the queue are:");
    ptr=front;
    while(ptr!=NULL){
    printf("%d-->",ptr->info);
    ptr=ptr->next;
    }
}
}
