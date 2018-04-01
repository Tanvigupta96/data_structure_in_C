#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void createlist1();
void createlist2();
struct node * concat();
void displaylist1();
void displaylist2();
struct node{
int info;
struct node *next;
};
struct node *start,*start1,*last,*last1,*newlist;

int main()
{
int ch,g;
start=NULL;
last=NULL;
start1=NULL;
last1=NULL;
do
{   printf("\nenter your choice:");
    printf("\n1.create list1:");
    printf("\n2.create list2:");
    printf("\n3.concatenate two lists:");
    printf("\n4.display list1");
    printf("\n5.display list2");
    printf("\n enter your choice:");
    scanf("%d",&ch);
switch(ch)
{
    case 1:createlist1(); break;
    case 2:createlist2();break;
    case 3:newlist=concat(); break;
    case 4:displaylist1(); break;
    case 5:displaylist2(); break;
    default: printf("\nsorry you must have seen ur choice carefully!!"); break;
}printf("\n do u wish to continue??");
scanf("%d",&g);
}while(g);
return 0;
}

void createlist1()
{
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
if(temp==NULL)
{

    printf("out of memory");
    exit(0);
}
printf("\nenter the value :");
scanf("%d",&temp->info);
temp->next=NULL;
if(start==NULL)
{
    start=temp;
    last=start;

}
else
{
    last->next=temp;
    last=temp;
}

}

void createlist2()
{
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
if(temp==NULL)
{

    printf("out of memory");
    exit(0);
}
printf("\nenter the value :");
scanf("%d",&temp->info);
temp->next=NULL;
if(start1==NULL)
{
    start1=temp;
    last1=start1;

}
else
{
    last1->next=temp;
    last1=temp;
}

}



void displaylist1()
{struct node *ptr;

    if(start==NULL)
    {

        printf("\nthe list is empty");

    }
    else
    {
        ptr=start;
        while(ptr!=NULL)
        {   printf("%d\t",ptr->info);
            ptr=ptr->next;
        }

    }
}


void displaylist2()
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






struct node * concat()
{
if(start==NULL)
{
return (start1);
}
if(start1==NULL)
{

    return(start);
}
    struct node *temp=start;
    while(temp->next!=NULL)
    {

        temp=temp->next;
    }
    temp->next=start1;
    return(start);

}
