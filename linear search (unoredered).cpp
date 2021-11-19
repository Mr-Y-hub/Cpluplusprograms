#include <iostream>
using namespace std;
int main()
{
int n,snum,flag,i;
cout<<"ENTER THE NUMBER OF ELEMENTS IN THE ARRAY (unordered)"<<endl;
cin>>n;
int A[n];
cout<<"enter elements"<<endl;
for(int h=0;h<n;h++)
{
	cin>>A[h];
}
cout<<"ENTER A NUMBER YOU WANT TO SEARCH"<<endl;
cin>>snum;
for ( i=0;i<n;i++)
{
	if ( A[i]==snum)
	    { flag=i;
	    break;
		}
}
if (i==n)
cout<<"not found"<<endl;
if(flag==i)
cout<<"found"<<"at "<<i+1<<endl;
return 0;
}

