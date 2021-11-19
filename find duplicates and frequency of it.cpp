#include <iostream>
using namespace std;
int main()
{
	int n=1,A[10],B[10],C[10],size,count;
	cout<<"this is the program to find duplicates in the array and its frequency"<<endl;
	cout<<"enter the size of the array(<10)"<<endl;
	cin>>size;
	cout<<"enter the elements of the array"<<endl;
	for(int i=0;i<size;i++)
	{
	cout<<"ENTER A NUMBER "<<i+1<<endl;
 	cin>>A[i];
	 }
	 int j;
	B[0]=A[0]; 
    for (int i=1;i<size;i++)
    {
    	for(j=0;j<n;j++)
    	{ if (A[i]==B[j])
    	break;
		}
			if (j==n)
			{
				B[j]=A[i];
				n++;
			}

	}
cout<<"elements are"<<endl;
for (int i=0;i<n;i++)
{
	cout<<B[i]<<endl;
}
cout<<"\n";
 
 
 for ( int i=0;i<n;i++)
      {   count=0;
      	for ( int j=0;j<size;j++)
      	{
      		if(B[i]==A[j])
      		  count++;
		  }  C[i]=count;
		  
	  }
cout<<" frequency of numbes are"<<endl;
for ( int i=0;i<n;i++)
{
	cout<<B[i]<<"\t"<<C[i]<<endl;
}
  return 0;
 }
		 


