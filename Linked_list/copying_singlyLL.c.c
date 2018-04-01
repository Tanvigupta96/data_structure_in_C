//copy one linked list into another linkedlist
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create();
void copy();
void display();
struct node
{

    int info;
    struct node *next;
};
struct node *start1;
struct node *start2;


//copying one linked list into another linked list
int main()
{start1=NULL;
start2=NULL;
 int ch,g;
  do
    {
        printf("menu(choose operation you want to perform");
        printf("\n1.create");
        printf("\n2.copy");
        printf("\n3.display");
        printf("\n enter your choice out of these:");
        scanf("%d",&ch);
            switch(ch)
            {
                case 1: create(); break;
                case 2: copy(); break;
                case 3: display(); break;
     default: printf("you have entered a wrong choice"); break;
            }
    printf("\n do u wish to continue(1/0):");
    scanf("%d",&g);
    }while(g);
return 0;
}



void create()
{
    struct node *temp,*ptr;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {

        printf("\nout of memory space");
        exit(0);

    }
    printf("\nenter the info:");
    scanf("%d",&temp->info);
    temp->next=NULL;
    if(start1==NULL)
    {
        start1=temp;
    }
    else{
        ptr=start1;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;

    }
}


void copy()
{
    struct node *ptr2;
    struct node *ptr1;
    ptr1=start1;
    ptr2=start2;
    while(ptr1!=NULL)
    {
        ptr2=ptr1;
        printf("%d",ptr2->info);
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }

}

void display()
{   struct node *ptr2;
    if(start1==NULL)
    {

        printf("\nthe list is empty");
    }
    else
    {
        ptr2=start2;
         printf("\nthe elements of the list are:");
    while(ptr2!=NULL)
    {
       printf("%d->",ptr2->info);
        ptr2=ptr2->next;
    }

}
}
