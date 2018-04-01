#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void sorted_linklist1();
void sorted_linklist2();
void displaylinklist1();
void displaylinklist2();
struct node *  mergelists();
struct node{
int info;
struct node *next;
 };
 struct node *start1,*start2,*last1,*last2,*newlist;
int main()
{
    start1=NULL;
    start2=NULL;
    last1=NULL;
    last2=NULL;
    int ch,g;
  do
  {printf("\nmenu:");
    printf("\n1.insert sorted linklist 1:");
    printf("\n2.insert sorted linklist 2:");
    printf("\n3.display sorted linklist 1:");
    printf("\n4.display sorted linklist 2:");
    printf("\n5.merge the two sorted linklists");
    printf("\nenter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:sorted_linklist1(); break;
        case 2:sorted_linklist2(); break;
        case 3: displaylinklist1(); break;
        case 4: displaylinklist2(); break;
        case 5:newlist=mergelists(); break;
        default: printf("wrong choice");
    }
    printf("\n do u wish to continue:");
scanf("%d",&g);
}while(g);
}





void sorted_linklist1()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("\nout of memory");

    }
    printf("\nenter the info of the node:");
    scanf("%d",&temp->info);
    temp->next=NULL;
    if(start1==NULL)
    {
        start1=temp;
        last1=start1;
    }
    else
    {
        if(start1->info>temp->info)
        {
            temp->next=start1;
            start1=temp;
        }
        else if(last1->info<temp->info)
        {
            last1->next=temp;
            last1=temp;
        }
        else
        {
            struct node *p1,*p2;
            p1=start1;
            p2=start1->next;
            while(p2!=NULL)
            {
                if(temp->info > p1->info && temp->info < p2->info)
            {
                p1->next=temp;
                temp->next=p2;
            }
            p1=p1->next;
            p2=p2->next;
            }
        }

    }
}


void displaylinklist1()
{struct node *ptr;

    if(start1==NULL)
    {

        printf("\nthe list is empty");

    }
    else
    {
        ptr=start1;
        while(ptr!=NULL)
        {   printf("%d\t",ptr->info);
            ptr=ptr->next;
        }

    }
}


void sorted_linklist2()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("\nout of memory");

    }
    printf("\nenter the info of the node:");
    scanf("%d",&temp->info);
    temp->next=NULL;
    if(start2==NULL)
    {
        start2=temp;
        last2=start2;
    }
    else
    {
        if(start2->info>temp->info)
        {
            temp->next=start2;
            start2=temp;
        }
        else if(last2->info<temp->info)
        {
            last2->next=temp;
            last2=temp;
        }
        else
        {
            struct node *p1,*p2;
            p1=start2;
            p2=start2->next;
            while(p2!=NULL)
            {
                if(temp->info > p1->info && temp->info < p2->info)
            {
                p1->next=temp;
                temp->next=p2;
            }
            p1=p1->next;
            p2=p2->next;
            }
        }

    }
}


void displaylinklist2()
{struct node *ptr;

    if(start2==NULL)
    {

        printf("\nthe list is empty");

    }
    else
    {
        ptr=start2;
        while(ptr!=NULL)
        {   printf("%d\t",ptr->info);
            ptr=ptr->next;
        }

    }
}


struct node * mergelists(struct node *start1,struct node *start2)
{
   struct node *newhead=NULL;
   if(start1==NULL)
   {
       return start2;


   }
   else if(start2==NULL)
   {
       return start1;


   }
       if(start1->info < start2->info)
       {
           newhead=start1;
           newhead->next=mergelists(start1->next,start2);
       }
       else
       {
           newhead=start2;
           newhead->next=mergelists(start1,start2->next);
       }
       return newhead;
   }


