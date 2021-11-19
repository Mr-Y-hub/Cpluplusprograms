#include <iostream>
using namespace std;
int main()
{	int row,s=0,m=1;
cout<<"enter the number of rows"<<endl;
cin>>row;

for (int i=1;i<=row;i++)
{   for ( int k=0;k<s;k++)
       cout<<" ";
	for (int j=m;j<=row;j++)
	{
		cout<<j;
	}
	cout<<endl;
	m++;
	s++;
}
}
