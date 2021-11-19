#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int abc;
	cout<<"Alpaha"<<endl;
	cout.width(10);
	cout.fill('$');
	cout<<"Beeta"<<endl;
	cout<<" Wow"<<endl;
	int a=1,n;
	cout<<"INPUT THE NUMBER OF ROWS"<<endl;
	n=4;
	
	for( int i=0;i<n;i++)
	{
	   									//
	   for ( int k=0;k<=i;k++)
	        {
	        	if ( k==0 || i==0 ||i==k)
	        	a=1;
	        	else 
	        	a = a*(float(i-k+1)/float(k));
				cout<<a<<"   ";
					}		
	cout<<endl;
	}
	cout.fill(' ');
	cout.width(30);
	cout<<"wow";
	cout<<" 11.23212"<<endl;
	cout.setf(ios::fixed,ios::floatfield);
	cout.precision(3);
	cout<<" 11.23212"<<endl;
}
