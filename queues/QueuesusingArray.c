//implementing queues using array:
#include<stdio.h>
const int size = 30;
int queue[size],front=-1,rear=-1;
void enqueue(int item){
	if(rear==size-1)
		printf("queue is full,overflow");
	else{
		rear++;
		queue[rear]=item;
		if(front==-1)
			front=0;
	}

}

int dequeue(){
	int item;
	if(front==-1)
		printf("queue is empty,underflow");
	else if(front==rear){
		item=queue[front];
		front=-1;
		rear=-1;
	}
	else{
		item=queue[front];
		front=front+1;
	}
return item;
}

void display(){
int i;
if(front==-1)
		printf("queue is empty,underflow");
else{
	for(i=front;i<=rear;i++){
		printf("%d\n",queue[i]);
	}
}

}



int main(){
int ch,item;
	int a;

	printf("==Queues using Array==");
	do{
	printf("\n1.enqueue");
	printf("\n2.dequeue");
	printf("\n3.Display");
	printf("\nenter your choice");
scanf("%d",&ch);
switch(ch){
case 1:
scanf("%d",&item);
enqueue(item);
break;
case 2:
int val;
val=dequeue();
printf("dequeued element is:%d\n",val);
break;
case 3:
display();
break;
default:printf("invalid choice");

}

printf("continue?");
scanf("%d",&a);
}while(a==1);
return 0;

}
