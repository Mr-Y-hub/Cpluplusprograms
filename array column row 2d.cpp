#include<iostream>
using namespace std;
int main()
{	
	int m,n,sum=0;
	cout<<" this is the program to read array column wise and display row wise"<<endl;
	cout<<" enter the number of rows and columns"<<endl;
	cin>>m>>n;
	cout<<"row  "<<m<<"  column  "<<n<<endl;
	int a[m][n];
	cout<<" enter element in array "<<endl;
	for ( int i=0;i<n;i++)
	{    cout<<" enter the element of column "<<i<<endl;
		for( int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
		}
		cout<<" Array matrix row wise"<<endl;
	for ( int i=0;i<n;i++)
	{       cout<<endl;
		for( int j=0;j<m;j++)
		{
			cout<<a[i][j]<<"  ";
			if( !( a[i][j]%2 ==0))
			sum+= a[i][j];
		}
		
		}
		cout<<endl;
	cout<<" sum of the odd numbers in the array are"<<endl;
	cout<<sum;			
}
