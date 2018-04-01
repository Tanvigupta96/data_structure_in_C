//implementation of stack using array
#include<stdio.h>
void push(int[],int);
void pop(int[]);
void display(int[]);
int top=-1;
int main()
{
    int ch,g,stack[100],n,top;
    printf("\n enter the maximum size of the stack: ");

    scanf("%d",&n);
    do
    {printf("\nmenu:");
    printf("\n1.push on stack:(insertion)");
    printf("\n2.pop element from stack:(deletion)");
    printf("\n3.display the contents:");
    printf("\nenter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:push(stack,n); break;
        case 2:pop(stack); break;
        case 3:display(stack); break;
        default:
            printf("\nsorry, you have entered a wrong choice"); break;
    }
    printf("\n do you want to continue:");
    scanf("%d",&g);
    }while(g);

}


void push(int stack[],int n)
{int x;

if(top==n-1)
{
    printf("sorry,elements cant be inserted,overflow");

}
else
{

    printf("enter the element you want to push into the stack:");
    scanf("%d",&x);
top++;
printf("%d",top);
stack[top]=x;
}
}


void pop(int stack[])
{
    if(top==-1)
    {
        printf("\nthe stack is empty");

    }
    else
    {
        printf("the popped elements of the stack is:%d",stack[top]);
        top--;


    }

}



void display(int stack[])
{

    if(top==-1)
    {
       printf("\n the stack is empty");
    }
    else
    {
        printf("\n the elements of the stack are:");
        for(int i=top;i>=0;i--)
        {

        printf("%d",stack[i]);
        }
    }

}
