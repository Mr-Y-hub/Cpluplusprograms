#include <iostream>
using namespace std;
int BINARYSEARCH(int end,int arr[],int n)
{  int front=0;
	 int mid,i;
	while(front<=end)
	{  cout<<"\nArea of search = ";
		for(i=front;i<=end;i++)
		cout<<arr[i]<<" ";
	 mid= (front+end-1)/2;
		if ( n==arr[mid])
		  	{
			  cout<<"total no of comparision   "<<i<<endl;
			  return mid;
		}
		  else if (n<arr[mid] )
		  	end=mid-1;
		  else if (n>arr[mid])
		  front=mid+1;
	}
	cout<<"total no of comparision   "<<i<<endl;
	return -1;}

int main()
{
int size,num;
cout<<"\t\t\tENTER THE NUMBER OF ELEMENTS IN THE ARRAY (ordered) "<<endl;
cin>>size;  
cout<<"\t\t\t  SIZE OF AN ARRAY IS\t"<<size<<endl;
int arr[100];
cout<<"\t\t\tENTER ELEMEMTS"<<endl;
for(int h=0;h<size;h++)
{
	cin>>arr[h];
}
int snum;	
	cout<<"DOING BINARY SEARCH         WHICH ARRAY YOU WANT TO SEARCH"<<endl;
	cin>>snum;
	int result=BINARYSEARCH(size-1,arr,snum);
	if (result==-1)
	cout<<" NOT FOUND"<<endl;
   else
   {	cout<<endl;
	   	cout<<"number is found at  "<<result+1;
   }
   }
