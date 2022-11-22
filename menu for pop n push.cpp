//Program a menu driven program to do the following things:
#include<iostream>
#include<string.h>
#define max 50
using namespace std;

int main(){
	int stack[max];
	int i,top,m,item;
	string z;
	do{
	cout<<"Enter 1 to create empty stack::"<<endl;
	cout<<"Enter 2 to push item into stack::"<<endl;
	cout<<"Enter 3 to pop the item from the stack::"<<endl;
	cout<<"Enter 4 to show the top item of stack::"<<endl;
	cout<<"Enter 5 to display all the elements on the stack:: "<<endl;
	cin>>m;
	switch (m){
	case 1:
		top=-1;
		cout<<"Empty stack is created"<<endl;
		break;
	case 2:
		cout<<"Enter the value to push:: ";
		cin>>item;
		if(top==max-1){
			cout<<"stack is overflow";
		}
		else{
			top=top+1;
			stack[top]=item;
			cout<<"Push operation is sucessful"<<endl;
		}
	break;
	
	case 3:
		if(top<0){
			cout<<"Stack is underflow";
		}
			else
			{
				item=stack[top];
				top=top-1;
				cout<<"Deleted item from stack is "<<item;
			}
			break;
	case 4:
		if(top<0){
			cout<<"Stack is underflow";
		}
		else{
			cout<<"Peak or top element of stack is "<<stack[top];
		}
		break;
	case 5:
		if(top<0){
			cout<<"Stack is underflow";
		}
		else{
		
			for(i=0;i<(top+1);i++){
				cout<<stack[i]<<"\t";
			}
		}	
		break;
	default:
			cout<<"Enter valid case";
		}
		
		cout<<"\n";
		cout<<"Do you want to continue::";
		cin>>z;
	}
	while(z=="y");
	return 0;	
}

