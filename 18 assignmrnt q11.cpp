#include <iostream>
using namespace std;
int main()
{	int a=1,n,t;
	cout<<"INPUT THE NUMBER OF ROWS"<<endl;
	cin>>n;
	t=2*n;
	for( int i=0;i<n;i++)
	{
	   for (int j=t;j>=0;j--)
	   		cout<<"  ";
	   		t=t-1; 									//
	   for ( int k=0;k<=i;k++)
	        {
	        	if ( k==0 || i==0 ||i==k)
	        	a=1;
	        	else 
	        	a = a*(float(i-k+1)/float(k));
				cout<<a<<"   ";
					}		
	cout<<endl;}
}
