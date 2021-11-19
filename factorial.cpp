#include <iostream>
using namespace std;
int fact(int n)  // recursive
{
	int result;
	if(n==1) return 1;
	result=n*fact(n-1);
	return result;
}
int fact(int n)// Iterative
{	
	int result=1;
	for (int i=n; i>0;i--)
	{
		result=result*(i);
	}
}		
 int main(){
 	int num;
 	cout<<"\t\t\t\t\tenter any number you want "<<endl;
 	cin>>num;
 	int p=fact(num);
	cout<<p;
	
 }
 
 
 
