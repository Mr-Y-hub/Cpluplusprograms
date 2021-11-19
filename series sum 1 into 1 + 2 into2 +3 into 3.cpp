#include <iostream>
using namespace std;
int pop (int num,int p)
{
	cout<<num<<"*"<<num<<"=="<<(num * num)<<endl;
     p=p+ (num * num);
	return p; }




int main()
{
int n,sum=0;
cout<<"input the value of nth term"<<endl;
cin>>n;
for (int i=1;i<=n;i++)
    sum = pop(i,sum); 
	 
	 cout<<"sum of the above series is ="<<sum;
	 return 0;}
