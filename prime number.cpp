#include <iostream>
using namespace std;
int main () 
{int n;
int i=2;
int x,y;
cout<<"programming to check prime number or not"<<endl;
cout<<"you have to enter any number i will show you it is prime or not"<<endl;
cin>>n;
while(i<n)
{ if(n%i==0)
  {x=y;
  break;}
i++;
}

if(x==y)
 cout<<"it is not prime number";
 else
  cout<<"it is  prime number";
}
