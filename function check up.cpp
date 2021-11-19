#include <iostream>
using namespace std;
	int ecc( int num1,int num2)
	{  
	return num1*num2;
		
	}
int main()
{

	int a,b;
	cout<<"a,b"<<endl;
	cin>>a>>b;
	int k=ecc(ecc(ecc(a,ecc(a,ecc(ecc(a,ecc(ecc(ecc(a,b),b),b)),b))),b),b);
	cout<<a<<"    "<<b<<"   "<<k<<endl;	
}
