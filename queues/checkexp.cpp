#include<bits/stdc++.h> 
using namespace std; 
void areParenthesisBalanced(string exp,int len){
	stack<char> s;
	int flag=0;


	for(int i=0;i<len;i++){

		if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{') //for opening braces
		{
		s.push(exp[i]);
		flag=1;
		}
	if(!s.empty())
{ //in case of right parenthesis

	if(exp[i]==')')
	{
		if(s.top()=='('){
			s.pop();
			continue;
		}
		else
			break;
		

	}	

	 if(exp[i]=='}')
	{
		if(s.top()=='{'){
			s.pop();
			continue;
		}
		else
			break;
		
	}

	 if(exp[i]==']')
	{
		if(s.top()=='['){
			s.pop();
			continue;
		}
		else
			break;
		
	}
}

//if string starts with right parenthesis
if(exp[i]=='}'|| exp[i]==')' || exp[i]==']'){
	flag=0;
	break;
}
	
}

if(s.empty()&&flag==1){
	cout<<"Balanced"<<endl;
}
else{
	cout<<"not Balanced"<<endl;
}
}


int main(){
	string exp="{[()]}";
	int len=exp.length();
	int x;

	areParenthesisBalanced(exp,len);
	
	return 0;
}
