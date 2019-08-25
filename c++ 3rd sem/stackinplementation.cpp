#include<iostream>
#include<string.h>
using namespace std;
struct stack
{
	int top;
	char data[100];
	
};
void isempty(stack l)
{
	if(l.top==-1)
	{
		cout<<"stack is empty\n";
    }
	else
	{
		cout<<"stack is full\n";
		
	}
}
void push( stack *l,char *p)
{
	l->top=l->top+1;
	l->data[l->top]=*p;
	cout<<"\n";
	
	
}
void pop(stack *l)
{
	l->top=l->top-1;
	cout<<l->data[l->top];
	//
}
void display(stack *l)
{
	cout<<"stack is\n"<<endl;
	int i=0;
	for(i=0;i<=l->top;i++)
	{
		cout<<l->data[i];
	}
	cout<<"\n";
}
int main()
{
	stack z;
	z.top=-1;
	char temp;
	char c;
	do
	{
		cout<<"ENTER THE VALUE FOR THE STACK"<<endl;
		cin>>temp;
		push(&z,&temp);
		//cout<<"DO YOU WANT TO POP ANY ELEMENT PRESS THE ELEMENT
		cout<<"DO U WANT TO ENTER ANOTHER CHARACTER THEN PRESS 'y' AND NO OTHERWISE"<<endl;
	        cin>>c;
	}while(c=='y');
	display(&z);
	pop(&z);    
	display(&z);
	//display(z);
	return 0;
}
	

