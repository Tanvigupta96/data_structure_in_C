//wap to merge two linked lists
#include<stdio.h>
#include<stdlib.h>
void insertlist1();
void insertlist2();
void displaylist1();
void displaylist2();

void display_mergedlists();
typedef struct node
{
    int info;
    struct node *next;
}node;
node * merge_lists();

node *start1,*start2,*last1,*last2,*newlist;
int main()
{

    int ch,g;
    start1=NULL;
    start2=NULL;
    last1=NULL;
    last2=NULL;
    do
    {
    printf("\n menu:");
    printf("\n1.create sorted list 1:");
    printf("\n2.create sorted list 2:");
    printf("\n3.display sorted list 1:");
    printf("\n4.display sorted list 2:");
    printf("\n5.merge the two sorted lists");
    printf("\n6.display the merged list");
    printf("\n enter your choice:");
    scanf("%d",&ch);
    switch(ch){
    case 1: insertlist1(); break;
    case 2: insertlist2(); break;
    case 3: displaylist1(); break;
    case 4: displaylist2(); break;
    case 5: newlist = merge_lists(start1,start2); break;
    case 6: display_mergedlists(); break;
    default: printf("\n sorry,you have entered a wrong choice"); break;
    }
    printf("\n do you want to continue:");
    scanf("%d",&g);
}
while(g);
return 0;
}



void insertlist1()
{
    node *temp;
    temp=(node *)malloc(sizeof(node));
    if(temp==NULL){
        printf("\nout of memory");
    }
    printf("\n enter the info part of the node:");
    scanf("%d",&temp->info);
    temp->next=NULL;
    if(start1==NULL){
        start1=temp;
        last1=temp;
    }
    else
        if(temp->info < start1->info){
                temp->next=start1;
                start1=temp;
        }
        else
        if(temp->info > last1->info){
            last1->next=temp;
            last1=temp;
        }
        else{
            node *ptr1,*ptr2;
            ptr1=start1;
            ptr2=start1->next;
            while(ptr2!=NULL){
                if(ptr1->info < temp->info && ptr2->info > temp->info){
                    ptr1->next=temp;
                    temp->next=ptr2;
                }
                ptr1=ptr1->next;
                ptr2=ptr2->next;
            }
        }
}



void displaylist1()
{
    node *ptr;
    if(start1==NULL){
        printf("\n the list is empty");
    }

    else{
        printf("\n the sorted list 1 is:");
        ptr=start1;
        while(ptr!=NULL){
            printf("%d->",ptr->info);
            ptr=ptr->next;
        }
    }

}



void insertlist2()
{
    node *temp;
    temp=(node *)malloc(sizeof(node));
    if(temp==NULL){
        printf("\nout of memory");
    }
    printf("\n enter the info part of the node:");
    scanf("%d",&temp->info);
    temp->next=NULL;
    if(start2==NULL){
        start2=temp;
        last2=temp;
    }
    else
        if(temp->info < start2->info){
                temp->next=start2;
                start2=temp;
        }
        else
        if(temp->info > last2->info){
            last2->next=temp;
            last2=temp;
        }
        else{
            node *ptr1,*ptr2;
            ptr1=start2;
            ptr2=ptr1->next;
            while(ptr2!=NULL){
                if(ptr1->info < temp->info && ptr2->info > temp->info){
                    ptr1->next=temp;
                    temp->next=ptr2;
                }
                ptr1=ptr1->next;
                ptr2=ptr2->next;
            }
        }
}



void displaylist2()
{
    node *ptr;
    if(start2==NULL){
        printf("\n the list is empty");
    }

    else{printf("\n the sorted list 2 is:");
        ptr=start2;
        while(ptr!=NULL){
            printf("%d->",ptr->info);
            ptr=ptr->next;
        }
    }

}


node * merge_lists(node *start1,node *start2)
{node *newhead;
    if(start1==NULL){
         newhead=start2;
         return newhead;
    }
    else if(start2==NULL){
        newhead=start1;
        return newhead;
    }

      else if(start1->info < start2->info){
        newhead=start1;
        newhead->next=merge_lists(start1->next,start2);

        }
        else{
            newhead=start2;
            newhead->next=merge_lists(start1,start2->next);
        }

        return newhead;

}



void display_mergedlists()
{
    node *ptr;
    if(newlist==NULL){
            printf("\n the list you tried for merging is NULL");
    }
    else{
        printf("\n the merged list is:");
        ptr=newlist;
        while(ptr!=NULL){
            printf("%d->",ptr->info);
            ptr=ptr->next;
        }
    }
}
