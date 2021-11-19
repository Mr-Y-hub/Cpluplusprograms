#include<iostream>
using namespace std;
void merge(int a1[], int a2[], int len1, int len2)
{
	int len=len1+len2;
	int arr[len];
	int i=0,j=0,k=0;
	while(i<len1 && j<len2)
	{
		if(a1[i]<=a2[j])
		{
			arr[k]=a1[i];
			i++;
		}
		else
		{
			arr[k]=a2[j];
			j++;
		}
		k++;
	}
	while(i<len1)
	{
		arr[k]=a1[i];
		i++;k++;
	}
	while(j<len2)
	{
		arr[k]=a2[j];
		j++;k++;
	}
	cout<<"Merged array is : ";
	for(int i=0;i<k;i++)
	cout<<arr[i]<<" ";
}
int main()
{	cout<<" ";
cout<<" This is the program to merge two ordered arrays"<<endl;
cout<<" !! Attention write only ordered arrays"<<endl;
	int size1,size2;
	int a1[size1],b1[size2];
	cout<<" ENTER SIZE OF THE ARRAY 1"<<endl;
     cin>>size1;
     cout<<"ENTER SIZE OF THE ARRAY 2"<<endl;
     cin>>size2;
     cout<<" ENTER THE ELEMENTS OF THE ARRAY 1"<<endl;
     for (int i=0;i<size1;i++)
     { 
     	cin>>a1[i];
	 }
	   cout<<" ENTER THE ELEMENTS OF THE ARRAY 2"<<endl;
     for (int i=0;i<size1;i++)
     {	
     	cin>>b1[i];
	 }
	
	merge(a1,b1,size1,size2);
}
