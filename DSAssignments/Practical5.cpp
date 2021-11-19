 /*
    @name : Yash Patidar
    @version : 001
    Practical No: 5
*/
#include<iostream>
using namespace std;

int fib(int n)
{
	if(n==0||n==1)
		return n;
	return fib(n-1)+fib(n-2);
}
int main()
{
	int n;
	cout<<"Enter n"<<endl;
	cin>>n;
	cout<<"The fibbonacci series is "<<endl;
	for(int i=0;i<n;i++)
	{
	cout<<fib(i)<<" ";
	}
	return 0;
}