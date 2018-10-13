#include<iostream>
using namespace std;
class ds_lab_1
{
	int arr[20],n;
	public:
		void autoinsert();
		void insert();
		void Delete();
		int loca(int);
		void display();
};
void ds_lab_1::autoinsert()
{
	cout<<"Enter size of array : ";
	cin>>n;
	cout<<"start entering array "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void ds_lab_1::insert()
{
	int num,x,a,b;
	cout<<"enter value at which you want to insert : ";
	cin>>num;
	num=loca(num);
	for(int i=n;i>=num;i--)
	{
		arr[i+1]=arr[i];
	}
	n++;
	cout<<"enter which value you want to enter : ";
	cin>>x;
	arr[num]=x;
}
void ds_lab_1::Delete()
{
	int num;
	cout<<"enter value which you want to delete : ";
	cin>>num;
	num=loca(num);
	for(int i=num;i<n;i++)
	{
		arr[i]=arr[i+1];
	}
	n--;
}
int ds_lab_1::loca(int num)
{
	int x;
for(int i=0;i<n;i++)
{
	if(num==arr[i])
	{
		x=i;
	}
}	
return x;
}
	
void ds_lab_1::display()
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}


int main()
{
	ds_lab_1 l1;
	int n,num;
	l1.autoinsert();
	cout<<"1 to insert"<<endl<<"2 wo delete "<<endl<<"3 to find location "<<endl<<"4 to display"<<endl;
	cin>>n;
	while(n>0 && n<5)
	{
		switch(n)
		{
		case 1:
			l1.display();
			l1.insert();
			cin>>n;
			break;
		case 2:
			l1.display();
			l1.Delete();
			cin>>n;
			break;
		case 3:
			l1.display();
			l1.loca(n);
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
