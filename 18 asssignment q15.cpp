#include <iostream>
#include <iomanip>
using namespace std;
int main()
{	
    int n,k;
    double p=90.4222;
    n=111,k=17;
    cout<<p<<endl;
    cout<<fixed<<p<<endl;
    cout<<setprecision(0)<<showpoint<<p<<endl;
    cout<<scientific<<p<<endl;
    cout<<fixed<<p<<endl;
    cout<<dec<<p;
    cout<<fixed<<p<<endl;
}
