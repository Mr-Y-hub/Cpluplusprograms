#include <iostream>
#include <stdlib.h>
using namespace std;
int prime(int num)
{int div=0;
for(int j=1;j<=num;j++)
{
if (num%j == 0)
div++;
 }
 if (div==2)
{
	cout<<"this is the prime number which is just before the given number\t"<<num<<endl;  
	exit(0);    
}
}
int main ()
{ 
int n;
cout<<"enter a number i will show you previous prime  number up to this number "<<endl;
cin>>n;
for (int i=n;i>=2;i--)
	prime(i);}

