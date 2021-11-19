/*
    Name :- Yash Patidar
    ROll NO:- 20558
    Mail:- yash.20558@sscbs.du.ac.in
*/
#include <iostream>
using namespace std;
void show(int x[],int n)
{
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<x[i]<<" ";
	}
}

void recursion(int x[],int n,int c,int index)
{
	for(int i=0;i<=c;i++)
	{
		if(index==0)
		{
			x[index]=c;
			show(x,n);
			break;
		}
		else
		{
			x[index]=i;
			recursion(x,n,c-i,index-1);
		}
	}
return;
}

int main()
{
	int n;
    int c;
	cout<<"Enter value of n : ";
    cin>>n;
	int x[n];
	cout<<"Enter value of c : ";
    cin>>c;
	cout<<"All posible solutions value of "<<endl;
	for(int i=1;i<=n;i++)
	{
        cout<<"X"<<i<<" + ";
    }
	cout<<"\b\b= "<<c<<endl;
	recursion(x,n,c,n-1);
}