#include<iostream>
using namespace std;
class stack
{
	int top,arr[10];
	public:
	stack()
	{
		top=-1;
	}
		void push();
		void pop();
		void distop();
};
void stack::push()
{
	int num;
	cout<<"enter element you want to enter : ";
	cin>>num;
	arr[++top]=num;
}
void stack::pop()
{
	top--;
}
void stack::distop()
{
	cout<<arr[top];
}
int main()
{
	int n;
	stack l1;
	cin>>n;
	while(n>0 && n<4)
	{
		switch(n)
		{
	case 1:
		l1.push();
		cin>>n;
		break;
	case 2:
		l1.pop();
		cin>>n;
		break;
	case 3: 
		l1.distop();
		cin>>n;
		break;
	default:
		break;
		}
	}
}
