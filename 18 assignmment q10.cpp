#include <iostream>
using namespace std;
int main()
{	
	int n,t,r=1;
	
	cout<<"Input number of rows (half of the diamond): "<<endl;
	cin>>n;
	t=2*n;
	
	for (int i=1;i<=n;i++)
	{
		for (int j=t;j>=0;j--)
		{
			cout<<" ";
		}t=t-2;
		for (int k=0;k<r;k++)
		{
			cout<<"* ";
		}r=r+2;
		cout<<endl;
	}	
	r=r-2;
	t=t+2;
	for (int i=n;i>=0;i--)
	{ 
	for ( int j=0;j<t;j++)
		{
			cout<<" ";
	//	}t=t+2;
	//	for (int k=0;k<r;k++)
	//	{
	//		cout<<"* ";
	//	}r=r-2;
	
	//cout<<endl;
	}}

	cout<<r;	
	}
	
