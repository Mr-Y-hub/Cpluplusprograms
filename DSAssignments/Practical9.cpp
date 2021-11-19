#include<iostream>
using namespace std;
void shift(int arr[],int j,int i){
	for(int a=(i-1);a>=j;a--){
		arr[a+1]=arr[a];
	}
}
void inssort(int arr[],int n){
	int pick;
	int comp=1;
		cout<<"  intermediate: ";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<' ';
	cout<<endl;
	
	for(int i=1;i<n;i++){
		pick=arr[i];
		for(int j=0;j<i;j++){
				comp++;
				
			if(pick<arr[j]){
			
				shift(arr,j,i);
				arr[j]=pick;
			
				break;
			}
		
		}
		cout<<"intermediate: ";
				for(int i=0;i<n;i++)
	            cout<<arr[i]<<' ';
	            cout<<endl;
	}
	cout<<"\n comparisons: "<<comp;
		
}
int main(){
	int n;
	cout<<"enter size: ";
	cin>>n;
	int arr[n];
	cout<<"enter elements\n";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	inssort(arr,n);
	
	cout<<"\nsorrted array is : ";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<' ';
}