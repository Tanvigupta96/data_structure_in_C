#include<iostream> 
#include<stdlib.h> 
using namespace std;
class twostacks{
int *arr;
int top1,top2;
int size;
public:
twostacks(int n){
	size=n;
	top1=-1;
	top2=size;
	arr=new int[n];


}

//method to push an element x to stack 1:

void push1(int x){
	if(top1<top2-1){
		top1++;
		arr[top1]=x;
	}
	else{
		cout<<"stack overflow";
		exit(1);
	}
}

//method to push an element to stack 2:
void push2(int x){
	if(top1<top2-1){
		top2--;
		arr[top2]=x;
	}
	else{
		cout<<"stack overflow";
		exit(1);
	}
}


//mehtod to pop an element from first stack:
int pop1(){
	if(top1>=0){
		int x=arr[top1];
		top1--;
		return x;
	}
	else{
		cout<<"stack underflow";
		exit(1);
	}



}

int pop2(){
	if(top2<size){
		int x=arr[top2];
		top2--;
		return x;
	}
	else{
		cout<<"stack underflow";
		exit(1);
	}
}


};



int main(){
twostacks ts(5);
 ts.push1(5); 
    ts.push2(10); 
    ts.push2(15); 
    ts.push1(11); 
    ts.push2(7); 
    cout << "Popped element from stack1 is " << ts.pop1(); 
    ts.push2(40); 
    cout << "\nPopped element from stack2 is " << ts.pop2(); 
	return 0;

}