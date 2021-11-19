#include <iostream>
using namespace std;
int main (){
	int n,sum;
cout<<"enter a number i will give you sum of all digits of a number"<<endl;
cin>>n;
sum=0;
while(n>1)
{ 
sum = sum + n % 10;
n=n/10;
}
cout<<"ans is \t"<<sum<<endl;

return 0;
}

