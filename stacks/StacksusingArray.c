//implementing stacks using array:
#include<stdio.h>
#define SIZE 10 
void push(int );
int pop();
void display();

int top=-1,stack[SIZE];

int main(){
int ch,item;
	int a;

	printf("==Stacks using Array==");
	do{
	printf("\n1.Push");
	printf("\n2.pop");
	printf("\n3.Display");
	printf("\nenter your choice");
scanf("%d",&ch);
switch(ch){
case 1:
scanf("%d",&item);
push(item);
break;
case 2:
int val;
val=pop();
printf("popped element is:%d\n",val);
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





void push(int item){
	if(top==SIZE-1)
		printf("Stack is full,cant push more items");
	else{
		top++;
		stack[top]=item;
	}

}

int pop(){
	int val;
	if(top==-1)
		printf("Stack is empty,cant pop anything");
	else{
		val=stack[top];
		top--;
	}
return val;

}


void display(){
	if(top==-1)
		printf("Stack is empty!!");
	else{
		for(int i=top;i>=0;i--)
			printf("%d\n",stack[i]);
		

	}
}

