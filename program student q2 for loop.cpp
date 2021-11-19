#include <iostream>
using namespace std;
int  main ()
{   
	int m,n,q,l,s,k;
	cout<<"how many numbers you want to enter "<<endl;
	cin>>q;
	cout<<"enter a number "<<endl;
	cin>>m;
	cout<<"enter a number "<<endl;
	cin>>n;
	if (m>n)
	{ l=m;
	s=n;
	}
	else
	l=n;
	s=m;
	for(int i=2;i<q;i++)
	{
		cout<<"enter a number "<<endl;
		cin>>k;
		if (k>l)
		 l=k;
		 else
		 s=k;
	}
	cout<<"the largest number is "<<l<<endl;
	cout<<"the smallest number is "<<s<<endl;
	return 0;
		
	}
