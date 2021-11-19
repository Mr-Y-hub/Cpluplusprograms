#include <iostream>
using namespace std;
int main()
{	
	int n,k;
	cout<<"input the rows "<<endl;
	cin>>n;
	for (int i=0;i<n;i++)
	{  k=2;
		for (int j=0;j<=i;j++)
		{  if(i%2==0)
		{
		      
			if (k%2==0)
			cout<<"1";	
		else
			cout<<"0";
			}
			else
			{
		      
			if (k%2==0)
			cout<<"0";	
		else
			cout<<"1";
			}
			k++;
		}
		cout<<endl;
	}
}
