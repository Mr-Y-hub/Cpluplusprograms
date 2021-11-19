
#include <iostream>
#include <stdlib.h>  //for system("CLS")
using namespace std;
int wrecursion(int n1, int n2)//function definition without recursion 
{
	while(n1 != n2)
  {
	if (n1>n2)
    n1 -= n2;                     
    else
    n2 -= n1;
  }
cout<<"GCD of two number is "<<n1;
}	 
int recursion(int n1, int n2)//function definition with recursion 
{
	if (n2 != 0)
	return recursion(n2,n1%n2);
	else 
	return n1;
}
int main ()   //main function
{
	cout<<"Here is the program to find GCD of two no\n "<<endl;
    int n1,n2;
    int ch ;
    char c;

do {
    cout<<"Enter two number\n";
    cout<<"input the first number"<<endl;
    cin>>n1;
    cout<<"I second number"<<endl;
	cin>>n2;
    cout<<" Press 1 to do with recursion "<<endl;
	cout<<" Press 2 to do without recursion"<<endl;
	cin>>ch;
	switch (ch)
	{
	    case 1 : cout<<" HCF of two number is  "<<recursion(n1,n2);
			      break;
	
	    case 2 : wrecursion(n1,n2);
	              break;
	
	    default : cout<<"you Entered wrong Details "<<endl;
}
	cout<<" \n\nEnter y/Y to continue"<<endl;
	cin>>c;
	system("CLS");   //for clear screen
}while (c=='y' || c=='Y');   // do while loop ends here 


return 0;
}	                              
									
                                	
     

