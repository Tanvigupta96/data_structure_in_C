//wap to 1)delete alternative nodes,2)reverse a singly linked list,3)find middle element,4)number of nodes and 5)duplicate elements.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create();
void count();
void del_alt_nodes();
void reverselist();
void findmid_ele();
void findduplicate();
//int num_of_nodes(struct node);
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
    {printf("\nmenu");
    printf("\n1.create a node;");
    printf("\n2.count number of nodes:");
    printf("\n3.delete alternate nodes:");
    printf("\n4.reverse the singly linked list");
    printf("\n5.find the middle element of the list and print it");
    printf("\n6.find duplicate elements in the linked list");
  //  printf("\n7.calculate number of nodes in list(recursively)");
    printf("\nenter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: create(); break;
        case 2: count();break;
        case 3: del_alt_nodes(); break;
        case 4: reverselist(); break;
        case 5: findmid_ele(); break;
        case 6: findduplicate(); break;
    //    case 7: int number=num_of_nodes(start); printf("%d",number); break;
        default: printf("\nsorry you have entered a wrong choice"); break;

    }
    printf("\n do you want to continue:");
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
       printf("\nout of memory space:");
        exit(0);
   }
   else
    printf("\n enter info part for the node:");
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


void count()
{
    struct node *ptr;
    int counts=0;
    if(start==NULL)
    {
        printf("no. of zero nodes");
    }
    else
    ptr=start;
        while(ptr!=NULL)
    {
        counts++;
        printf("%d\t",ptr->info);
        ptr=ptr->next;
    }
    printf("\n the number of nodes is:%d",counts);

}









void del_alt_nodes()
{
    struct node *ptr1,*ptr2,*temp;
    ptr1=start;
    ptr2=ptr1->next;
    if(start==NULL)
    {

        printf("\n the list is empty");

    }
    else
    {
        while(ptr1!=NULL && ptr2!=NULL)
        {
            ptr1->next=ptr2->next;
            printf("the deleted node is:%d\n",ptr2->info);
            free(ptr2);
            ptr1=ptr1->next;
            while(ptr1!=NULL)
            {
                ptr2=ptr1->next;
                break;

            }

        }

    }

}

void reverselist()
{
        struct node *prev,*current,*next;
        current=start;
        prev=NULL;
        if(start==NULL)
        {
            printf("\n empty list");
        }
    else{
        while(current!=NULL)
        {
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
      start=prev;
    }
}



void findmid_ele()
{
    struct node *ptr1,*ptr2;
    ptr1=start;
    ptr2=start;
    while(ptr2&&ptr2->next)
    {
        ptr1=ptr1->next;
        ptr2=ptr2->next->next;

    }printf("the middle element of the list is:%d",ptr1->info);
}


void findduplicate()
{
    struct node *p,*q;
    p=start;
    q=start->next;
    while(p!=NULL)
    {
        while(q!=NULL)
        {
            if(q->info==p->info)
            {
                printf("\nthe duplicated element is:%d",q->info);
                q=q->next;
            }
            else{
                q=q->next;
        }

}        p=p->next;
        q=p->next;
    }
}

/*int num_of_nodes(struct node *start){
 if(start==NULL){
        return 0;
    }else {
        return 1+(num_of_nodes(start->next));
    }
}*/
