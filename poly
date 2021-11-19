#include<iostream>
#include<cmath>
using namespace std;
int calc(int arr[],int n,int x){
	int res=0;
	for(int i=n;i>=0;i--){
		res+=(arr[i]*(pow(x,i)));
	}
	return res;
}
int main(){
	int n;
	cout<<"enter degree: ";
	cin>>n;
	int arr[n];
	for(int i=0;i<=n;i++){
		
		cout<<"coefficient of x^"<<i<<": ";
		cin>>arr[i];
		if(i==n){
			
			if(arr[i]==0){
				cout<<"this cannot  be zero enter any other number: ";
				cin>>arr[i];
			}
		}
	}
	cout<<"the polynomial is:";
	for(int i=n;i>=0;i--){
		cout<<"("<<arr[i]<<")"<<"x^"<<i<<"+";
	}
	
	int x;
	cout<<"\n\nenter the value of x: ";
	cin>>x;
	int result=calc(arr,n,x);
	cout<<"\n value is: "<<result;
	
}