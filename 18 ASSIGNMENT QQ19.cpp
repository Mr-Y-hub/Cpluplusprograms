#include<iostream>
using namespace std;
int main()
{	int row;
	cout<<"input the number of rows"<<endl;
	cin>>row;
	int m=row;
	for(int i=1;i<=row;i++)
	{   for( int p=m;p>0;p--)
	cout<<" ";
	m--;
	
	 int k=i;
		for (int j=i;j>0;j-- )
		{
			cout<<k;
			k--;
		}
		cout<<endl;
	}
}
