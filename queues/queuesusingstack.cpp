#include<iostream>
#include <bits/stdc++.h> 

using namespace std;
struct Queue
{
	stack<int> s1,s2;

	void enqueue(int item){
		s1.push(item);
	}

	int dequeue(){
		if(s1.empty()&&s2.empty()){
			cout<<"queue is empty";
			return 0;
		}
		
			if(s2.empty()){
				while(!s1.empty()){
					s2.push(s1.top());
					s1.pop();
				}
			}

			int x=s2.top();
			s2.pop();
			return x;

		

	}
};
	

	int main(){
		Queue q;
		q.enqueue(1);
		q.enqueue(2);
		q.enqueue(3);

		cout<<q.dequeue()<<"\n";
		cout<<q.dequeue()<<"\n";
		cout<<q.dequeue()<<"\n";




	return 0;
	
	}