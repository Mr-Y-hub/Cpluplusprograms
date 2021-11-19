#include <iostream>
using namespace std;
int  main ()
{   int num,j;
	cout<<"enter a number you want to check it is prime or not"<<endl;
	cin>>num;
int i=2;
	do
	{ if (num==2)
	break;
		else if(num%i==0)
                  num=j;
				  i++	;} while (i<num);
if (num==j)
 cout<<"it is not prime number"<<endl;
 else
  cout<<"it is  prime number"<<endl;}
