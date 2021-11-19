#include <iostream>
using namespace std;
int main()
{
int p,max,min;
cout<<"ENTER THE NUMBER OF ELEMENTS IN THE ARRAY"<<endl;
cin>>p;
int A[p];
cout<<"enter elements"<<endl;
for(int h=0;h<p;h++)
{
	cin>>A[h];
}
max=A[0];
min=A[0];
for( int j=0;j<p;j++)
{
	if ( max<A[j])
	    max=A[j];
}
for( int k=0;k<p;k++)
{
	if (min > A[k] )
	min=A[k];
}
cout<<"THE GRATEST NUMBER IS "<<max<<endl;
cout<<"THE LEAST NUMBER IS "<<min<<endl;

}

