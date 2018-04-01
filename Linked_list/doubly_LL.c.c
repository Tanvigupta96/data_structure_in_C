//doubly linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void creation();
void display();
void reversedisplay();
void insert_beg();
void insert_end();
void insert_pos();
void delete_beg();
void delete_end();
void delete_pos();
void delete_alt();
struct node
{
    int info;
    struct node *next;
    struct node *prev;
};
struct node *start;
struct node *last;
int main()
{
    start=NULL;
    last=NULL;
    int ch,g;
    do
    {printf("\n menu:");
    printf("\n1.creation");
    printf("\n2 display");
    printf("\n3.reverse display");
    printf("\n4.insertion at the beginning");
    printf("\n5.insertion at the end");
    printf("\n6.insertion at any random position");
    printf("\n7.delete node from beginning");
    printf("\n8.delete node from end");
    printf("\n9.delete node from any random position");
    printf("\n10.delete alternate nodes");
    printf("\nenter ur choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: creation(); break;
        case 2: display(); break;
        case 3: reversedisplay();break;
        case 4: insert_beg(); break;
        case 5: insert_end(); break;
        case 6: insert_pos();break;
        case 7: delete_beg(); break;
        case 8: delete_end(); break;
        case 9: delete_pos(); break;
        case 10: delete_alt(); break;
        default: printf("\nsorry,you have entered a wrong choice"); break;

    }
    printf("\n do u want to continue:");
    scanf("%d",&g);
}while(g);
return 0;
}


void creation()
{ struct node *temp,*ptr;
temp=(struct node*)malloc(sizeof(struct node));
if(temp==NULL)
{
    printf("\nout of memory");
    exit(0);
}
    printf("\nenter the info part of the node:");
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

}


void display()
{struct node *ptr;
int count=0;
    if(start==NULL)
    {
        printf("\nthe list is empty");
    }

    else{
            printf("\n the elements of the list are:");
        ptr=start;
        while(ptr!=NULL)
        {count++;
            printf("%d\t",ptr->info);
            ptr=ptr->next;
        }
        printf("\n no of nodes in the linklist are:%d",count);
    }

}


void reversedisplay()
{
    struct node *ptr;
    int count=0;
    if(start==NULL)
    {

        printf("\nthe list is empty");

    }
    else{
        printf("\nthe elements of the list are:");
        ptr=last;
        while(ptr!=NULL)
        {
            printf("%d\t",ptr->info);
            ptr=ptr->prev;
        }
        printf("\n no of nodes in the linklist are:%d",count);
        }
    }


void insert_beg()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("out of memory");
        exit(0);
            }
    temp->next=NULL;
    temp->prev=NULL;
    printf("\nenter the info of the node:");
    scanf("%d",&temp->info);
    if(start==NULL)
    {
        start=temp;
        last=start;
    }
    else

    {

        temp->next=start;
        start->prev=temp;
        start=temp;
        temp->prev=NULL;
    }
}

void insert_end()
{ struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("out of memory");
        exit(0);
            }
    temp->next=NULL;
    temp->prev=NULL;
    printf("\nenter the info of the node:");
    scanf("%d",&temp->info);
    if(start==NULL)
    {
        start=temp;
        last=start;
    }
    else
    {


    last->next=temp;
    temp->prev=last;
    last=temp;
    temp->next=NULL;
}
}


void insert_pos()
{
struct node *temp,*ptr,*ptr1;
int pos,i;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("out of memory");
        exit(0);
    }
    printf("\nenter the info of the node:");
    scanf("%d",&temp->info);
    temp->next=NULL;
    temp->prev=NULL;
    if(start==NULL)
    {
        start=temp;
        last=start;
    }

    else{
    printf("\nenter the position at which u want to insert the new node:");
    scanf("%d",&pos);
        if(pos==1)
        {
        temp->next=start;
        start->prev=temp;
        start=temp;
        temp->prev=NULL;
        }
    else
        {
        for(i=1,ptr=start;i<pos-1;i++)
        {
            ptr=ptr->next;
        }
        ptr1=ptr->next;
        ptr->next=temp;
        temp->prev=ptr;
        temp->next=ptr1;
        ptr1->prev=temp;

    }
}
}


void delete_beg()
{
    struct node *temp;
    if(start==NULL)
    {

        printf("\nno node to delete");
    }
    temp=start;
    start=start->next;
    start->prev=NULL;
    printf("\nthe info of the node u deleted is:%d",temp->info);
    free(temp);
}


void delete_end()
{struct node *temp;
 if(last==NULL)
 {
     printf("\n no node to delete");

 }
 temp=last;
 last=last->prev;
 last->next=NULL;
 printf("\nthe info of the node u deleted is:%d",temp->info);
 free(temp);
}



void delete_pos()
{   int pos,i;
    struct node *ptr,*temp;
    if(start==NULL)
    {
        printf("\nthere is no node to delete");

    }
    else
    {
        printf("\nenter the position which u want to delete:");
        scanf("%d",&pos);
        if(pos==1)
        {
            temp=start;
            start->next=start;
            start->prev=NULL;
            free(temp);
        }
        else
        {
            for(i=1,ptr=start;i<pos-1;i++)
            {
                ptr=ptr->next;
            }
            temp=ptr->next;
            ptr->next=temp->next;
            temp->next->prev=ptr;
            free(temp);

        }
    }
}


void delete_alt()
{
    struct node *ptr1,*ptr2;
    ptr1=start;
    ptr2=start->next;
    if(start==NULL)
    {
        printf("\n no node to delete exists");
    }
    else
    while(ptr1!=NULL && ptr2!=NULL)
    {
        ptr1->next=ptr2->next;
        ptr2->next->prev=ptr1;
        printf("the node you deleted is:%d\n",ptr2->info);
        free(ptr2);
        ptr1=ptr1->next;
        while(ptr1!=NULL)
        {
         ptr2=ptr1->next;
         break;
        }

}
}
