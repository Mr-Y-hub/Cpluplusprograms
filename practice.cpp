#include <iostream>
#include <stdexcept>

using namespace std;
int main()
{	
try{

	int a,b;
	cin>>a>>b;
	if (b==0)
	throw 10;
	int r=a/b;
	cout<<r;
}
catch (int)
{
	cout<<" Invalid"<<endl;
}
}
