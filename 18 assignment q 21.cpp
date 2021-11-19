#include<iostream>
using namespace std;
int main()
{	int row,count,s=1;
	cout<<"enter the number of rows"<<endl;
	cin>>row;
	int m=row;
	for ( int i=row;i>0;i--)
	{	 for(int p=0;p<s;p++)
	cout<<" ";
	s=s+1;
		for (int j=1;j<(2*m);j++)
		{
			if (j==1)
			count=1;
			else if(j>i)
			--count;
			else
			count++;
			cout<<count;
			
		} cout<<endl;
	m=m-1;}
}
