#include <iostream>
using namespace std;
int newarr(int arr[], int size)
{
	for ( int i=0; i < size; i++)
	{
		cout<<arr[i]<<" ";
	}
}
int getarr(int arr[], int size)
{
	for (int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
}
int main ()
{	int size;
	cin>>size;
	int arr[size];
	getarr(arr,size);	
	newarr(arr,size);
}
