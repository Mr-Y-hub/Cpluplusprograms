#include <iostream>
using namespace std;
int main()
{	
	int n,t;
	cout<<"input the number "<<endl;
	cin>>n;
	t=n;
	for(int i=1;i<(n+1);i++)
	{
	for (int j=t;j>=0;j--)
	 cout<<" ";
	    t--;
		for (int j=1;j<=i;j++)
		{
			cout<<i<<" ";
				
		}
		cout<<endl;
	}
return 0;}
