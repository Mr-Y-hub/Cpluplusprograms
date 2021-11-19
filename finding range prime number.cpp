#include <iostream>
using namespace std;
void prime(int num)
{int div=0;
for(int j=1;j<=num;j++)
{
if (num%j == 0)
 div++;
 }
 if (div==2)
 cout<<num<<endl;
}

int main ()
{
	int range;
	cout<<"prime number upto range is "<<endl<<"enter range"<<endl;
	cin>>range;
	for (int i=1;i<=range;i++)
      prime(i);
    
}
