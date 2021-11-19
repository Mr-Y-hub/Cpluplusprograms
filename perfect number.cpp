#include <iostream>
using namespace std;
int divisor (int a)
{int sum;

  sum=0;
for (int i=1;i<a;i++)
{ 
if (a%i==0)
   sum=sum +i;

}
if(sum==a)
return a;
else 
return 0;}




int main()
{   
int range;
 cout<<"this is the program to find perfect number between 1 and range"<<endl;
   cout<<"enter the value of range"<<endl;
   cin>>range;
   
   for(int i=2;i<range;i++)
   {int k= divisor(i);
    if (k != 0)
	cout<<k<<endl;
	}
   }
