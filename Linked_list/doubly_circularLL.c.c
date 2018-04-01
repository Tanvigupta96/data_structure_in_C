//circular doubly linkedlist
#include<stdio.h>
#include<conio.h>
void create();
void display();
void count();
void insertion();
void deletion();
struct node
{
    int  info;
    struct node *next;
    struct node *prev;

};
struct node *start,*last;
int main()
{
    start=NULL;
    last=NULL;
    int ch,g;
do
{
printf("\nmenu:");
printf("\nenter your choice:");
printf("\n1.create a list:");
printf("\n2.display the list");
printf("\n3.count the number of nodes:");
printf("\n4.insertion in the linklist");
printf("\n5.deletion in the linklist");
printf("\nenter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1: create(); break;
case 2: display(); break;
case 3: count(); break;
case 4: insertion(); break;
case 5: deletion(); break;
default: printf("\nyou have entered a wrong choice");
break;
}
printf("\n do u want to continue:");
scanf("%d",&g);
}while(g);

}



void create()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("out of memory");
    }

    printf("\nmention info part,please:");
    scanf("%d",&temp->info);
    temp->next=NULL;
    temp->prev=NULL;
    if(start==NULL)
    {
      start=temp;
      last=temp;
    }
    else
    {
        last->next=temp;
        temp->prev=last;
        last=temp;
    }


        start->prev=last;
        last->next=start;
}


void display()
{struct node *ptr;
    if(start==NULL)
    {
        printf("\nthe list is empty:");
    }

    else
    {
        ptr=start;
        printf("\n the list you entered is:");
        printf("\n%d--->",start->info);
        ptr=start->next;

    while(ptr!=start)
    {
        printf("%d--->",ptr->info);
        ptr=ptr->next;
    }
    }

}


void count()
{
    struct node *ptr;
    int count=0;
    ptr=start;
    do
    {
        count++;
        ptr=ptr->next;

    }
    while(ptr!=start);
    printf("the total number of nodes are:%d",count);

}



void insertion()
{

    int ch,g=1;
    do{
    printf("\nchoose:");
    printf("\n1.insertion at the beginning:");
    printf("\n2.insertion at the mid position:");
    printf("\n3.insertion at the end:");
    printf("\n enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:insert_beg();break;
        case 2:insert_pos();break;
        case 3:insert_end();break;
        default: printf("\nsorry,you have entered a wrong choice:");

    }
    printf("\n do you wish to continue:");
    scanf("%d",&g);
}while(g);

}



void insert_beg()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\ninfo part:");
    scanf("%d",&temp->info);
    temp->next=NULL;
    temp->prev=NULL;
    if(start==NULL)
    {
        start=temp;
        last=temp;
        start->prev=last;
        last->next=start;


    }

    else
    {

        temp->next=start;
        last->next=temp;
        start->prev=temp;
        start=temp;
        temp->prev=last;
}


}


void insert_end()
{
   struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\ninfo part:");
    scanf("%d",&temp->info);
    temp->next=NULL;
    temp->prev=NULL;
    if(start==NULL)
    {
        start=temp;
        last=temp;
        start->prev=last;
        last->next=start;


    }
    else
    {
        last->next=temp;
        temp->prev=last;
        last=temp;
        start->prev=temp;
        temp->next=start;
    }

}


void insert_pos()
{
    struct node *temp,*ptr;
    int pos,i;
    printf("\nenter the node you want to insert into the circular linklist");
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\nenter the info part of the temp node:");
    scanf("%d",&temp->info);
    temp->next=NULL;
    printf("enter the position at which you want to insert at:");
    scanf("%d",&pos);
    ptr=start;
    for(i=1;i<pos-1;i++)
    {
        ptr=ptr->next;

    }

    temp->prev=ptr;
    temp->next=ptr->next;
    ptr->next->prev=temp;
    ptr->next=temp;

}






void deletion()
{

    int ch,g=1;
    do{
    printf("\nchoose:");
    printf("\n1.deletion from the beginning:");
    printf("\n2.deletion from the mid position:");
    printf("\n3.deletion from the end:");
    printf("\n enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:delete_beg();break;
        case 2:delete_pos();break;
        case 3:delete_end();break;
        default: printf("\nsorry,you have entered a wrong choice:");

    }
    printf("\n do you wish to continue:");
    scanf("%d",&g);
}while(g);

}


void delete_beg()
{
    struct node *temp;
    temp=start;
    start=start->next;
    last->next=start;
    start->prev=last;
    free(temp);
}



void delete_end()
{
    struct node *temp;
    temp=last;
    last=last->prev;
    last->next=start;
    start->prev=last;
    free(temp);

}


void delete_pos()
{
    struct node *temp,*ptr;
    ptr=start;
    int pos,i;
    printf("\n enter the position from which u want to delete the node:");
    scanf("%d",&pos);
    for(i=1;i<pos-1;i++)
    {
        ptr=ptr->next;
    }
    temp=ptr->next;
    temp->next->prev=ptr;
    ptr->next=temp->next;
    free(temp);
}
