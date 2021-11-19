#include <iostream>
using namespace std;
int main ()
{
	int n;
cout<<"this is the program to find sum of first n natural number"<<endl;
cout<<"enter the value of n"<<endl;
cin>>n;
int sum=0;
for (int i=1;i<=n;i++)
    sum = sum+n;
	
	cout<<"the sum is "<<sum<<endl;
	return 0;
	
	}
