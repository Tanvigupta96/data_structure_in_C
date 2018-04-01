//merging two sorted linked lists
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insertsortedlist1();
void insertsortedlist2();
void display();
void mergesortedlists();
struct node
{
    int info;
    struct node *next;
};
struct node *start1;
struct node *last1;
struct node *start2;
struct node *last2;


int main()
{
    int ch,g;
    start1=NULL;
    last1=NULL;
    start2=NULL;
    last2=NULL;
    do
    {
    printf("\nmenu:");
    printf("\n1.insertsortedlist1");
    printf("\n2.insertsortedlist2");
    printf("\n3.display");
    printf("\n4.mergesortedlists1,2");
    printf("\nenter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:insertsortedlist1();break;
        case 2:insertsortedlist2();break;
        case 3:display(); break;
       // case 4:mergesortedlists();break;
        default:printf("\nsorry you have entered a wrong choice"); break;

    }
    printf("\ndo you wish to continue:(1/0)");
    scanf("%d",&g);
    }while(g);
return 0;
}

void insertsortedlist1()
{
    struct node *temp,*ptr1,*ptr2;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {

        printf("out of memory");


    }
    else{

    printf("\nenter the node info:");
    scanf("%d",&temp->info);
    temp->next=NULL;
}
if(start1==NULL)
{
    start1=temp;
    last1=start1;

}
else{
    if(start1->info>temp->info)
    {
       temp->next=start1;
       start1=temp;
    }
    else if(temp->info>last1->info)
    {
        last1->next=temp;
        last1=temp;
    }
    else
    {
        ptr1=start1;
        ptr2=start1->next;
        while(ptr2!=NULL)
        {
        if((ptr1->info < temp->info) && (ptr2->info > temp->info))
        {
         ptr1->next=temp;
         temp->next=ptr2;
         break;
        }
            ptr1=ptr1->next;
            ptr2=ptr2->next;

        }
    }

    }

}


void insertsortedlist2()
{
    struct node *temp,*ptr1,*ptr2;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {

        printf("out of memory");


    }
    else{

    printf("\nenter the node info:");
    scanf("%d",&temp->info);
    temp->next=NULL;
}
if(start2==NULL)
{
    start2=temp;
    last2=start2;

}
else{
    if(start2->info>temp->info)
    {
       temp->next=start2;
       start2=temp;
    }
    else if(temp->info>last2->info)
    {
        last2->next=temp;
        last2=temp;
    }
    else
    {
        ptr1=start2;
        ptr2=start2->next;
        while(ptr2!=NULL)
        {
        if((ptr1->info < temp->info) && (ptr2->info > temp->info))
        {
         ptr1->next=temp;
         temp->next=ptr2;
         break;
        }
            ptr1=ptr1->next;
            ptr2=ptr2->next;

        }
    }

    }

}





void display()
{struct node *ptr;
    if(start==NULL)
    {

        printf("the list is empty");
    }
    else
        ptr=start;
        printf("\nthe list is:");
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->info);
        ptr=ptr->next;
    }
}
