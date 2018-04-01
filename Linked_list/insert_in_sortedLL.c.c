//insertion in a sorted linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insertion();
void display();
struct node
{
    int info;
    struct node *next;
};

struct node *start;
struct node *last;
int main()
{ int ch,g;
    start=NULL;
    last=NULL;
    do
    {
        printf("menu(choose operation you want to perform");
         printf("\n1.insertion");
        printf("\n2.display");
        printf("\n enter your choice out of these:");
        scanf("%d",&ch);
            switch(ch)
            {

                case 1: insertion(); break;
                case 2: display(); break;
                default: printf("you have entered a wrong choice"); break;
            }
    printf("\n do u wish to continue(1/0):");
    scanf("%d",&g);
    }while(g);
return 0;
}

void insertion()
{
    struct node *ptr1,*temp,*ptr2;
    printf("create the node you want to insert:");
    temp=(struct node *)malloc(sizeof(struct node));
    printf("\n enter the info part of the node you created:");
    scanf("%d",&temp->info);
    temp->next=NULL;
    if(start==NULL)
    {
        start=temp;
        last=temp;
    }
  else{
    if(start->info>temp->info)
    {

        temp->next=start;
        start=temp;

    }
    else if(temp->info>last->info)
    {
        last->next=temp;
        last=temp;
    }
    else
    {
        ptr1=start;
        ptr2=start->next;
        while(ptr2!=NULL)
        {
          if((temp->info>ptr1->info)&& (temp->info<ptr2->info))
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




