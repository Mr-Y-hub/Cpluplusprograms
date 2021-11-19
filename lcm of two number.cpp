#include <iostream>
using namespace std;
int main () 
{int n1,n2;
cout<<"here is the program to find lcm of two no\n ";
cout<<"enter two number";
cin>>n1>>n2;
if (n1>n2)
  {
	  for (int i=1;i<n2;i++)
	  {
	  if ((n1*i)%n2==0)
	  {
	  cout<<"lcm"<<n1*i;
	  break;}
	  }}
else 
{
	 	 for (int i=1;i<n1;i++)
	  {
	 
	   if ((n2*i)%n1==0)
	 {
	   cout<<"lcm"<<n2*i; 
	  break;}
	  }}


}
