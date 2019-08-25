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
stack push( stack l,char p)
{
	l.top=l.top+1;
	l.data[l.top]=p;
	return l;
	
}
stack pop(stack l)
{
	l.top=l.top-1;
	cout<<l.data[l.top];

	return l;
}
void display(stack l)
{
	cout<<"stack is \n"<<endl;
	int i=0;
	for(i=0;i<=l.top;i++)
	{
		cout<<l.data[i];
	}
	cout<<"\n";
}
int main()
{
	stack z;
	z.top=-1;
	int i;
	char temp;
	int c;
	/*z=push(z,'h');
	z=push(z,'i');
	z=push(z,'w');
	z=push(z,'o');
	z=push(z,'r');
	z=push(z,'l');
	z=push(z,'d');
	z=push(z,'!');
	display(z);
	z=pop(z);
	display(z);*/
		
	for(i=0;i<100;i++)
	{
	cout<<"ENTER YOUR CHOICE 1.PUSH 2.POP 3.DISPLAY AND EXIT"<<endl;
	cin>>c;
	switch(c)
	
		{
			case 1:
				{
				cout<<"enter the value to be pushed"<<endl;
				cin>>temp;
				z=push(z,temp);
				
				break;
				} 
			 
			case 2:
				{
				cout<<"voila' it is just popped"<<endl;
				z=pop(z);
				
				break;
				}
			case 3:
				{
				cout<<"displaying it as your wish"<<endl;
				display(z);
				
				break;
				}
			default:
				{
				cout<<"the end of an era"<<endl;
				break;
				
				}
		}
	}
	return 0;
}
	

