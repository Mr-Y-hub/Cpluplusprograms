#include <iostream>
using namespace std;
int  main ()
{   
	int m,n,q,l,s,k,sum=0;
	
	cout<<"enter a number "<<endl;
	cin>>m;
	sum=sum+m;
	
	cout<<"enter a number "<<endl;
	cin>>n;
	sum=sum+n;
	
	if (m>n)
	{ l=m;
	s=n;
	}
	else
	l=n;
	s=m;
	q=2;
	do{
		
		cout<<"enter a number "<<endl;
		cin>>k;
		if(k==-1)
		break;
		else
		{
		if (k>l)
		 l=k;
		 else
		 s=k;
	q++;
	sum=sum+k;}
	}while(k!=-1);
	cout<<"porcess is terminated"<<endl;
	cout<<"the largest number is "<<l<<endl;
	cout<<"the smallest number is "<<s<<endl;
	cout<<"total integers is "<<q<<endl;
	cout<<"sum of all integers is  "<<sum<<endl;
	cout<<"average of the numbers is "<<float(sum)/float(q)<<endl;
	return 0;
		
	}
