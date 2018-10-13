#include<iostream>
using namespace std;
class ds_lab_3
{
	int arr[20],n;
	public:
		void autoinsert();
		void loca();
		void sort();
		void display();
};
void ds_lab_3::autoinsert()
{
	cout<<"Enter size of array : ";
	cin>>n;
	cout<<"start entering array "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void ds_lab_3::loca()
{
	int num;
	int x=0;
	sort();
	display();
	int mid,low=0,high=n-1;
	mid=(low+high)/2;
	cout<<"enter value you want to search : ";
	cin>>num;
	while(low<=high)
	{
	if(arr[mid]==num)
	{
		x=1;
		break;
	}
	else if(arr[mid]<num)
	{
		low=mid+1;
		mid=(low+high)/2;
	}
	else
	{
		high=mid-1;
		mid=(low+high)/2;	
	}
	}
	if(x!=0)
	{
		x++;
		cout<<arr[x]<<" is at index "<<x;
	}
	else
	{
		cout<"Not found ";
	}
}
void ds_lab_3::sort()
{
	int temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[j]>arr[j+1])
			{
			temp=arr[j+1];
			arr[j+1]=arr[j];
			arr[j]=temp;
			}
		}
	}
}	
void ds_lab_3::display()
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	ds_lab_3 l1;
	int n,num,x;
	l1.autoinsert();
	cout<<"3 to find location "<<endl<<"4 to display"<<endl<<"5 to sort";
	cin>>n;
	while(n>2 && n<6)
	{
		switch(n)
		{
		case 3:
			l1.loca();
			cin>>n;
			break;
		case 4:
			l1.display();
			cin>>n;
			break;
		case 5:
			l1.sort();
			cin>>n;
			break;
		default:
			break;
		}
	}
}
