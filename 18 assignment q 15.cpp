#include <iostream>
using namespace std;
int main()
{	int row,m=1;
cout<<"enter the number of rows"<<endl;
cin>>row;

for (int i=1;i<=row;i++)
{
	for (int j=m;j<=row;j++)
	{
		cout<<j;
	}
	cout<<endl;
	m++;
}
}
