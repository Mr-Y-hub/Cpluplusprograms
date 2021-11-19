#include <iostream>
using namespace std;
int main()
{	
int row,t=1,m;
	char ch='A';
	
	cout<<"enter the number of rows for alphabetical pyramid"<<endl;
	cin>>row;
	m=2*row;
	for ( int i=1;i<=row;i++)
	{   for (int k=m;k>=0;k--)
			cout<<" ";
			m=m-2;
		for (int j=1;j<=t;j++)
		{
			if (j==1)
			  ch='A';
			 else if(j>i)
			  ch--;
			  else
			  ++ch;
			  cout<<ch<<" ";
		} cout<<endl; 
		t=t+2;
	}
}
