#include <iostream>
using namespace std;
int LINEARSEARCH( int a, int arr[])
{	int snum,flag,i;
	cout<<"\t\t   DOING LINEAR SEARCH "<<endl;     
	cout<<"  \t\t WHICH ARRAY YOU WANT TO SEARCH"<<endl;
	cin>>snum;
	for ( i=0;i<a;i++)
{
	if ( arr[i]==snum)
	    { flag=i+1;
	    break;
		}
}
if (i==a)
cout<<"NOT FOUND"<<endl;
else{

	if ( flag>0 && flag<((a/2)-1))
	cout<<"\t\t\tNUMBER IS FOUND AT BEGINNING"<<" AND AT POSITION  "<<flag<<endl;
	else if( flag>=((a/2)+1) && flag<=a)
	cout<<"\t\t\tNUMBER IS FOUND AT END"<<" AND AT POSITION  "<<flag<<endl;
	else if( flag>=((a/2)-1) && flag<=((a/2)+1 ))
	cout<<"\t\t\tNUMBER IS FOUND AT MIDDLE"<<" AND AT POSITION  "<<flag<<endl;
    cout<<"\t\t\tTOTAL NUMBER OF COMPARISION IS  "<<flag<<endl;
}
return 0;	
}
int BINARYSEARCH(int end,int arr[],int n)
{  int front=0;
	 int mid,i;
	while(front<=end)
	{  cout<<"\nArea of search = ";
		for(i=front;i<=end;i++)
		cout<<arr[i]<<" ";
	 mid= (front+end)/2;
		if ( n==arr[mid])
		  return mid;
		  else if (n<arr[mid] )
		  	end=mid-1;
		  else if (n>arr[mid])
		  front=mid+1;
	}
	cout<<"total no of comparision   "<<i<<endl;
	return -1;
	
	
	
}




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
label:
cout<<"\t\t\tWhich searching you want to do "<<endl;
cout<<"\t\t\t\tPress 1 for Linear search"<<endl;
cout<<"\t\t\t\tPress 2 for Binary search"<<endl;
cin>>num;
if(num==1)
{
	LINEARSEARCH(size,arr);
}
else if (num==2)
{	int snum;	
	cout<<"DOING BINARY SEARCH         WHICH ARRAY YOU WANT TO SEARCH"<<endl;
	cin>>snum;
	int result=BINARYSEARCH(size-1,arr,snum);
	if (result==-1)
	cout<<" NOT FOUND"<<endl;
   else
   	cout<<result+1;
}
else 
{
	cout<<"YOU ENTER WRONG NUMBER"<<endl;
	goto label;
}

}


