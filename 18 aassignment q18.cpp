#include <iostream>
using namespace std;
int main()
{	int row;
cout<<"enter the number of rows"<<endl;
cin>>row;
int m=row;
for (int i=1;i<=row;i++)
{
	for (int j=m;j>0;j--)
	{
		cout<<j;
	}
	cout<<endl;
	m--;
}
}
