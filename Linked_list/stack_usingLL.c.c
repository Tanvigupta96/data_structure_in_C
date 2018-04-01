//linkedlist implementation of stack
#include<stdio.h>
void push(int);
void display();
void pop();
typedef struct node
{
    int info;
    struct node *next;
}node;
node *top;
int count=0;

int main()
{

top=NULL;
    int ch,g;
    do
    {printf("\nmenu:");
    printf("\n1.push on stack:(insertion)");
    printf("\n2.pop element from stack:(deletion)");
    printf("\n3.display the contents:");
    printf("\n4.count elements of stack:");
    printf("\nenter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {

        case 1:
            {int val;
            printf("\nenter the value you want to push:");
            scanf("%d",&val);
            push(val);
            }
            break;

            case 2:pop(); break;
            case 3:display(); break;
            case 4:printf("the number of elements in the stack are:%d",count);
            break;
            default:
            printf("\nsorry, you have entered a wrong choice"); break;
    }
    printf("\n do you want to continue:");
    scanf("%d",&g);
    }while(g);

}


void display()
{
    node *ptr;

    printf("\n//stack:\\");
    ptr=top;
    while(ptr!=NULL)
    {
        printf("%d-->",ptr->info);
        ptr=ptr->next;

    }

}


void push(int val)
{
    node *temp;
    temp=(node *)malloc(sizeof(node));
    temp->info=val;
    temp->next=top;
    top=temp;
    count++;

}



void pop()
{
    node *temp;
    if(top==NULL)
    {
        printf("\n stack underflow:");
    }
    else
    {
        temp=top;
        top=top->next;
        free(temp);
        count--;
    }

}
