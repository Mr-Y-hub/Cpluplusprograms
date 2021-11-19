#include <iostream>
using namespace std;
 int main()
 {int p,k=0;
 	 
 cout<<"how many numbers you want to enter"<<endl;
 	cin>>p;
 	int sum=0,avr=0,n;
 	do 
 	{
 		cout<<"enter a number ";
 		cin>>n;
 		sum += n;
 		avr++;
 		k++;
	 } while (k<p);
	 cout<<"sum of all numbers are "<<sum<<endl;
	 cout<<"average of an number is "<<sum/(avr)<<endl;
	 
	 
 }
