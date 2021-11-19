#include <iostream>
using namespace std;
int son (int num, int p)
   { int s=0;
   	for (int i=1;i<=num;i++)
   	    {cout<<i;
   	    if (i<num)
   	    cout<<"+";
   	    s=s+i;
			   } 
cout<<"="<<s<<endl;			      
   p=p+s;
   return p;
   }
int main()
{
int n,sum=0;
cout<<"input the value of nth term"<<endl;
cin>>n;
for (int i=1;i<=n;i++)
  {
    sum= son(i,sum);
}
cout<<"sum of the series is "<<sum;
}
