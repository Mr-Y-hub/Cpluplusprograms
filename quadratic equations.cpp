#include <iostream>
#include <cmath>
using namespace std;
 
 
 
 int main()
 { double a,b,c,d,k,l;
  loop : cout<<"enter the quadratic equation value as a,b,c\n";
 cin>>a>>b>>c;
 cout<<"check the equation is it right say y/n\t\t"<<a<<"x^2+"<<b<<"x+"<<c<<endl;
 char ch;
 cin>>ch;
 if (ch=='y')
 cout<<"good"<<endl;
 else 
 {
 cout<<"write once again"<<endl;
 goto loop;}
 cout<<"checking discriminant"<<endl;
 d=(b*b -(4*a*c));
 if (d > 0)
{  k= (-b + sqrt( d))/2*a;
 l=(-b -  sqrt( d))/2*a;
cout<<"roots are feasible"<<k<<"\t"<<l<<endl; }
else if(d==0){
	k=-b/(2*a);
	cout<<"roots are feasible"<<k<<"\t"<<k<<endl;
} 
 else
 {cout<<"roots are not feasible"<<endl;
 }
 
 
 }
