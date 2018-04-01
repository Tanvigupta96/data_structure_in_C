//circular queue
#include<stdio.h>
#include<process.h>
void insert(int[],int);
void deletion(int[],int);
void display(int[],int);
int front=-1;
int rear=-1;
int main()
{
    int n,ch,g;
    int Q[100];
    printf("\n enter the maximum size of the queue:");
    scanf("%d",&n);
   do
    {
    printf("\nmenu:");
    printf("\n1.insert element into the queue:(insertion)");
    printf("\n2.delete element from the queue:(deletion)");
    printf("\n3.display the contents of the queue:");
    printf("\nenter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:insert(Q,n); break;
        case 2:deletion(Q,n); break;
        case 3:display(Q,n); break;
        default:
            printf("\nsorry, you have entered a wrong choice"); break;
    }
    printf("\n do you want to continue:");
    scanf("%d",&g);
    }while(g);

}


void insert(int Q[],int n)
{ int data;
printf("\nenter the element you want to insert:");
scanf("%d",&data);

if (front==0 && rear==n-1){
     printf("queue is full,overflow");

}


else
{
    if(front==rear+1){
     printf("queue is full,overflow");

    }


    else if(rear==-1){
     front=0;
     rear=0;
    }


    else if(rear==n-1){
     rear=0;
    }


    else{
    rear=rear+1;
    }


Q[rear]=data;
printf("the data successfully entered into the queue:");
}
}






void deletion(int Q[],int n)
{int data;
    if(front==-1){
        printf("\nthe queue is empty,no elements to delete");
    }

    data=Q[front];

    if(front==rear){
        front=-1;
        rear=-1;
    }

    else if(front==n){
            front=1;
        }

    else{
          front=front+1;
    }

}



void display(int Q[],int n)
{ int i,j;
    if(front==-1 && rear==-1){
        printf("\nno elements to display,queue is empty(underflow)");
    }

   else if(front>rear)
    {
        for(i=0;i<=rear;i++)
            printf("\t%d",Q[i]);
        for(j=front;j<=n-1;j++)
            printf("\t%d",Q[j]);
        printf("\nrear is at %d\n",Q[rear]);
        printf("\nfront is at %d\n",Q[front]);
    }

    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("\t%d",Q[i]);
        }
        printf("\nrear is at %d\n",Q[rear]);
        printf("\nfront is at %d\n",Q[front]);

    }
printf("\n");
}
