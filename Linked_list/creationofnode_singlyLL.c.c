#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void creation();
struct node
{
    int info;
    struct node *next;
};

struct node *start;
int main()
{

int ch,g;
    start=NULL;
    do
    {
        printf("menu(choose operation you want to perform");
        printf("\n1.creation");
     printf("\n enter your choice out of these:");
        scanf("%d",&ch);
            switch(ch)
            {
                case 1: creation(); break;
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
    temp=((struct node *)malloc(sizeof(struct node)));
    if(temp==NULL)
    {

        printf("\nout of memory space");
    }
        printf("\nenter info of the node:");
        scanf("%d",&temp->info);
        temp->next=start;
        if(start==NULL)
        {
            start=temp;
        }
        else
        {
        ptr=start;
        while(ptr->next!=start)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
        }
}
