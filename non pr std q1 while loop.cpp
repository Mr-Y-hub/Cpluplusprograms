#include <iostream>
using namespace std;
 int main(){
 	int n,sum=0,avr=0,k,p;
 	cout<<"how many numbers you want to enter"<<endl;
 	
 	cin>>n;
    k=0;
 	while (k<n)
 	{cout<<"enter a number ";
 		cin>>p;
 		sum += p;
 		avr++;
 		k++;
	 }
	 cout<<"sum of all numbers are "<<sum<<endl;
	 cout<<"average of an number is "<<sum/(avr)<<endl;}
