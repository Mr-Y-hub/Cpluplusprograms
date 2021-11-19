#include <iostream>
using namespace std;
int main () 
{int n1,n2;
cout<<"here is the program to find HCF of two no\n ";
cout<<"enter two number\n";
cout<<"input the first number"<<endl;
cin>>n1;
cout<<"enter second number"<<endl;
cin>>n2;
while(n1 != n2)
{if (n1>n2)
     n1 -= n2;                     
        else
     n2 -= n1;   }                   
cout<<"hcf of two number is "<<n1;
}	                              
									
                                	
     

