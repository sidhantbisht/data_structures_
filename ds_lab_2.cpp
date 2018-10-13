#include<iostream>
using namespace std;
class ds_lab_2
{
	int arr[20],n;
	public:
		void autoinsert();
		int loca(int);
		void display();
};
void ds_lab_2::autoinsert()
{
	cout<<"Enter size of array : ";
	cin>>n;
	cout<<"start entering array "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
int ds_lab_2::loca(int num)
{
	int x=0;
for(int i=0;i<n;i++)
{
	if(num==arr[i])
	{
		x=i;
	}
}	
if(x!=0)
{
	cout<<arr[x]<<" is at index "<<x;
	
}
else
{
	cout<"No data found ";
}
return x;
}
	
void ds_lab_2::display()
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}


int main()
{
	ds_lab_2 l1;
	int n,num,x;
	l1.autoinsert();
	cout<<"3 to find location "<<endl<<"4 to display"<<endl;
	cin>>n;
	while(n>2 && n<5)
	{
		switch(n)
		{
		case 3:
			l1.display();
			cout<<"enter element : ";
			cin>>x;
			l1.loca(x);
			cin>>n;
			break;
		case 4:
			l1.display();
			cin>>n;
			break;
		default:
			break;
		}
	}
}
