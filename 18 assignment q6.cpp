#include <iostream>
using namespace std;
void two ()
{
		int n,k;
	cin>>n;
	if (n<0)
	throw 20.0;
	cin>>k;	
	if (k==0)
	throw 10;  
	int p = n/k;
	cout<<p;
}
int main()
{	
	try {
	
       two();
    }
	catch ( int )
	{
		cout<<"Do not enter zero"<<endl;
	}
	catch (double)
	{
		cout<<" pls enter positive no"<<endl;
	}
}
