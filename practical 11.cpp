#include <iostream>
using namespace std;

int main()

{
	cout<<" \t\tprogram to display Exception handling"<<endl;
	float p,q,r;
	//try
	
	cout<<"\t\tEnter Dividend : "<<endl;
	cout<<"\t\t";cin>>p;
	
	
	cout<<"\t\tEnter Divisor : "<<endl;
	cout<<"\t\t";cin>>q;
	try {
		
	
	if (q==0)
	
		throw ("Error");
	
	else
	cout<<" The result after division is "<< p/q;}
	catch (string msg)
	{
		cout<<"\n\t\t";
		cout<<msg<<endl;
	}
	catch (const char* d)
	{
		cerr<<d<<endl;
	}
}
