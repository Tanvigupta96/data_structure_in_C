#include<iostream> 
using namespace std; 
#define MAX 100
class Deque{
	int arr[MAX];
	int front;
	int rear;
	int size;


public:
	Deque(int size){
		front=-1;
		rear=0;
		this->size=size;

	}

	//operations on deque:
	void insertRear(int item);
	void insertFront(int item);
	void deleteRear();
	void deleteFront();
	int getFront();
	int getRear();
	bool isFull();
	bool isEmpty();
};

bool Deque:: isFull(){
	//checks whether dequeue is full or not
	return((rear+1==front)||(front==0 && rear==size-1));
}

bool Deque:: isEmpty(){
	//checks whether dequeue is empty of not
	return(front==-1);
}

void Deque:: insertRear(int x){
	if(isFull()){
		cout<<"overflow"<<endl;return;
	}

	//if queue is initially empty
	if(front==-1){
		front=0;
		rear=0;
	}
	//if rear is at last position
	else if(rear==size-1){
		rear=0;
	}
	else{
		rear=rear+1;
	}

	arr[rear]=x;

}


void Deque::insertFront(int x){
	if(isFull()){
		cout<<"overflow"<<endl;return;

	}
	//if queue is initially empty
	if(front==-1){
		front=0;
		rear=0;
	}
	
	else if(front==0)
		front=size-1;
	else
		front=front-1;
	arr[front]=x;
}

void Deque:: deleteRear(){
	if(isEmpty()){
		cout<<"underflow"<<endl;return;
	}

	if(front==rear){
		front=-1;
		rear=-1;
	}
	else if(rear==0){
		rear=size-1;
	}
	else
		rear=rear-1;
}

void Deque::deleteFront(){
	if(isEmpty()){
		cout<<"underflow"<<endl;return;
	}
	if(front==rear){
		front=rear=-1;
	}
	else if(front==size-1){
		front=0;
	}
	else
		front=front+1;
}

int Deque:: getRear(){
	if(isEmpty()||rear<0){
		cout<<"underflow"<<endl;

		return -1;

	}
	return arr[rear];
}

int Deque:: getFront(){
	if(isEmpty()){
		cout<<"underflow"<<endl;
		
		return -1;


	}
	return arr[front];

}


int main(){
	Deque dq(5);
	cout << "Insert element at rear end  : 5 \n"; 
    dq.insertRear(5); 
    cout << "insert element at rear end : 10 \n"; 
    dq.insertRear(10); 
    cout << "get rear element " << " "
         << dq.getRear() << endl; 
    dq.deleteRear(); 
    cout << "After delete rear element new rear"
         << " become " << dq.getRear() << endl; 
  
    cout << "inserting element at front end \n"; 
    dq.insertFront(15); 
  
    cout << "get front element " << " "
         << dq.getFront() << endl; 
   dq.deleteFront(); 
  
    cout << "After delete front element new "
       << "front become " << dq.getFront() << endl; 
    return 0; 
  

}


