
#include<iostream>
using namespace std;


int fact(int c)
{    int r;
	for(int i=c;i>1;i--)
        r=r*i;
return r;
}
int set (int m, int n)
{
	int result=1;
       for(int i=1;i<=n;i++)
      { result=result*m;
      }
return result;								//sum of series 1 - X^2/2! + X^4/4!-.... upto nth term.  

}





int future (int a,int s,int p,int l)
{ 
float k;
 int u=set(p,l);
 int v=fact(l);
k=float(u/v);
cout<<"term"<<a<<"value is "<<k<<endl;
    s=s+k;
     l=2*l;
  return s;       
	 }     





int main()
{
	int x,n,sum=0,d=1;
	cout<<"INPUT THE VALUE OF X"<<endl;
	cin>>x;
	cout<<"INPUT THE VALUE OF N"<<endl;
	cin>>n;
    for (int i=1;i<=n;i++)
	     future(i,sum,x,d);		
	cout<<sum;
	
	
	
	}
