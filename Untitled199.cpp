#include<iostream>
using namespace std;
void merge(int arr[], int p, int q, int r)
{	int larr[q+1];
      int t=r-q;
      int rarr[t];
      for ( int i=0;i<q+1;i++)
              larr[i]=arr[i];
        for ( int i=0;i<t;i++)
              rarr[i]=arr[q+i+1];        
	for ( int i=0;i<q+1;i++)
              cout<<larr[i];
              cout<<endl;
        for ( int i=0;i<t;i++)
              cout<<rarr[i];  
	
}
int main()
{	 int a[10]={1,3,5,7,9,2,4,6,8,10};
    	merge(a,0,4,9);
}
