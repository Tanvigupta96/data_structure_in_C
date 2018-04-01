//singly linked list
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void creation();
void display();
void seaching();
void insertion();
void insert_beg();
void insert_middle();
void insert_end();
void deletion();
void del_beg();
void del_middle();
void del_end();

struct node
{
    int info;
    struct node *next;  //self-referential
};

struct node *start; //start is a special pointer of type node it holds the address of the starting node of the linked list


int main() //main starts
{
    int ch,g;
    start=NULL;
    do
    {
        printf("menu(choose operation you want to perform");
        printf("\n1.creation");
        printf("\n2.display");
        printf("\n3.searching");
        printf("\n4.insertion");
        printf("\n5.deletion");
        printf("\n enter your choice out of these:");
        scanf("%d",&ch);
            switch(ch)
            {
                case 1: creation(); break;
                case 2: display(); break;
                case 3: searching(); break;
                case 4: insertion(); break;
                case 5: deletion(); break;
                default: printf("you have entered a wrong choice"); break;
            }
    printf("\n do u wish to continue(1/0):");
    scanf("%d",&g);
    }while(g);
return 0;
}


void creation()
{
    struct node *temp,*ptr;


    temp=(struct node *) malloc(sizeof(struct node)); //allocate memory to the temp node
    if(temp==NULL)
    {

        printf("\nout of memory space");
        exit(0);

    }
    printf("\nenter the data value for the node:");
    scanf("%d",&temp->info);
    temp->next=NULL;
    if(start==NULL)
    {

        start=temp;
    }
    else
    {
        ptr=start;
        while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;

    }
}


void display(){
struct node *ptr;
if(start==NULL)
{
    printf("\nnothing to display");

}
else
{
    printf("the elements of the list are:");
    ptr=start;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->info);
        ptr=ptr->next;
    }

}
}


void searching()
{
    int data,ele_found;
    struct node *ptr;
    if(start==NULL)
    {

        printf("\nthe list is empty");
    }
    else
    {
        printf("\nenter the value you want to search:");
        scanf("%d",&data);
        ptr=start;
        while(ptr!=NULL)
        {
            if(ptr->info==data)
            {
                ele_found=1;
                break;
            }
            else
                ptr=ptr->next;
        }
        if(ele_found==1)
        {
            printf("\nelement found in the list");
        }else
            printf("\nelement not found in the list");
    }

}

void insertion()
{   int c,h;
do{
    printf("\nselect where you want to insert the new node:");
    printf("\n1.insertion at the beginning");
    printf("\n2.insertion at any random position");
    printf("\n3.insertion at the end");
    printf("\nselect your choice:");
    scanf("%d",&c);
    switch(c)
    {
    case 1: insert_beg(); break;
    case 2: insert_middle(); break;
    case 3: insert_end(); break;
    default: printf("sorry,you have made a wrong choice"); break;
    }
    printf("\n do u want to continue insertion(y/n)?");
    scanf("%d",&h);
}while(h);
}

void insert_beg()
{
    printf("\ngive the node you wish to inset at the beginning");
    struct node *temp;
    temp=(struct node *) malloc(sizeof(struct node)); //allocate memory to the temp node
    if(temp==NULL)
    {

        printf("\nout of memory space");
        exit(0);

    }
    printf("\nenter the data value for the node:");
    scanf("%d",&temp->info);
    temp->next=NULL;
    if(start==NULL)
    {

        start=temp;

    }
    else
    {
        temp->next=start;
        start=temp;
    }
}


void insert_middle()
{
    struct node *ptr,*temp;
    int pos,i;


    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {

        printf("out of memory");
    }
        printf("\nenter the position where you wish to insert the node:");
        scanf("%d",&pos);
        printf("\nenter the info part:");
        scanf("%d",&temp->info);
        temp->next=NULL;
        if(pos==0)
        {
            temp->next=start;
            start=temp;
        }
       else
       {
           ptr=start;
           for(i=1;i<pos-1;i++)
           {
               ptr=ptr->next;
               if(ptr==NULL)
               {

                   printf("position not found,handle with care!!");

               }

           }
           temp->next=ptr->next;
           ptr->next=temp;
           }

}



void insert_end()
{
    printf("give the node you wish to inset at the end");
    struct node *temp,*ptr;
    temp=(struct node *) malloc(sizeof(struct node)); //allocate memory to the temp node
    if(temp==NULL)
    {

        printf("\nout of memory space");
        exit(0);

    }
    printf("\nenter the data value for the node:");
    scanf("%d",&temp->info);
    temp->next=NULL;
    if(start==NULL)
    {

        start=temp;

    }
    ptr=start;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
}


void deletion()
{   int c,h;
do{
    printf("\nselect where you want to insert the new node:");
    printf("\n1.deletion from the beginning");
    printf("\n2.deletion from any random position");
    printf("\n3.deletion from the end");
    printf("\nselect your choice:");
    scanf("%d",&c);
    switch(c)
    {
    case 1: del_beg(); break;
    case 2: del_middle(); break;
    case 3: del_end(); break;
    default: printf("sorry,you have made a wrong choice"); break;
    }
    printf("\n do u want to continue deletion(y/n)?");
    scanf("%d",&h);
}while(h);
}

void del_beg()
{
    struct node *temp;
    if(start==NULL)
    {
        printf("list is empty,there is no node to delete");

    }
    else
        temp=start;
        start=start->next;
        printf("the element you deleted is:%d",temp->info);
        free(temp);

}

void del_end()
{   struct node *ptr,*temp;
    if(start==NULL)
    {
    printf("list is empty,there is no node to delete");
    }
    else if(start->next==NULL)
    {
        ptr=start;
        start=NULL;
        printf("\n the deleted element is:%d",ptr->info);
        free(ptr);

    }
    else
    {
        ptr=start;
        while(ptr->next!=NULL)
        {
            temp=ptr;
            ptr=ptr->next;
        }
        temp->next=NULL;
        printf("\n the deleted element is:%d",ptr->info);
        free(ptr);


}
}


void del_middle()
{

    struct node *ptr,*temp;
    int pos,i;
    if(start==NULL)
    {

    printf("list is empty,there is no node to delete");
    }
    else if(start->next==NULL)
    {
        ptr=start;
        start=NULL;
        printf("\n the deleted element is:%d",ptr->info);
        free(ptr);

    }
    printf("\nenter the position from where you want to delete the node:");
    scanf("%d",&pos);
    for(i=1,ptr=start;i<pos-1;i++)
    {ptr=ptr->next;
    }
     temp=ptr->next;
     ptr->next=temp->next;
     printf("the element you deleted is:%d",temp->info);
     free(temp);
    }


