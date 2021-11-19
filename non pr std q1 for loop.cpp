#include <iostream>
using namespace std;
 int main()
 {
 	int n,sum=0,avr=0,k;
 	cout<<"how many numbers you want to enter"<<endl;
 	cin>>n;
 	for (int i=0;i<n;i++)
 {
	 	cout<<"enter a number ";
 		cin>>k;
 		sum += k;
 		avr++;
		 }
		 cout<<"sum of all numbers are "<<sum<<endl;
	 cout<<"average of an number is "<<sum/(avr)<<endl;}
