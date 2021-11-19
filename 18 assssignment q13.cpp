#include <iostream>
using namespace std;
int main()
{	
int row,count=1,t=1,m;
	cout<<"enter th number of rows"<<endl;
	cin>>row;
	m=2*row;
	for ( int i=1;i<=row;i++)
	{   for (int k=m;k>=0;k--)
			cout<<" ";
			m=m-2;
		for (int j=1;j<=t;j++)
		{
			if (j==1)
			  count=1;
			 else if(j>i)
			  count--;
			  else
			  ++count;
			  cout<<count<<" ";
		} cout<<endl; 
		t=t+2;
	}
}
