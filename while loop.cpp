#include <iostream>
using namespace std;
int main(){
	int n,sum;
	int i=0;
	cout<<"enter a number you want to sum"<<endl;
	cin>>n;
	sum=0;
	while(i<=n) {
		
		sum=sum+i;
		i++;
	}
	cout<<"sum\t"<<sum;
	
}
