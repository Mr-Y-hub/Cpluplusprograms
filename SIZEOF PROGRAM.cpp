#include <iostream>
using namespace std;
int main()
{
	double result=1.0;
 for(int i=2;i<=6;i++)
 {
	 if(i%2==0)
     {result=result-(1/(i*i));
	 }
      else 
        {       result=result+(1/(i*i));
	                            }
}
cout<<result;

}
