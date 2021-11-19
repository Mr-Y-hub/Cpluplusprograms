#include<iostream>
using namespace std;
int Bsearch(int a[], int size, int n)
{
	int beg,last,mid;
	beg=0;
	last=size-1;
	while(beg<=last)
	{
		cout<<"\nArea of search = ";
		for(int i=beg;i<=last;i++)
		cout<<a[i]<<" ";
		mid=(beg+last)/2;
		if(n==a[mid])
		return mid;
		else if(n>a[mid])
		beg=mid+1;
		else
		last=mid-1;
	}
	return -1;	
}
int main()
{
	int i,size,n;
	cout<<"Enter the size of the array : ";
	cin>>size;
	int a[size];
	cout<<"\nEnter elements of the array (sorted) : ";
	for(int i=0;i<size;i++)
	cin>>a[i];
	cout<<"\nEnter the element to be searched : ";
	cin>>n;
	cout<<"\n\n\t\t\t\tLINEAR SEARCH";
	for(i=0;i<size;i++)
	{
		if(a[i]==n)
		{
			cout<<"\nElement found!!!!! ";
			cout<<"\nIndex no. of the element is : "<<i;
			cout<<"\nNo. of comparisons : "<<i+1;
			break;
		}else if(a[i]>n)
		{
			cout<<"\nElement is not present !!!!";
			cout<<"\nNo. of comparisons : "<<i+1;
			break;
		}
	}
	if(i==size)
	{
		cout<<"\nElement is not present !!!!";
		cout<<"\nNo. of comparisons : "<<size;
	}
	int index;
	cout<<"\n\n\t\t\t\tBINARY SEARCH";
	index=Bsearch(a,size,n);
	if(index==-1)
	cout<<"\nElement is not present !!!";
	else
	{
		cout<<"\nElement found !!!!";
		cout<<"\nIndex no. of the element is : "<<index;
	}
}
