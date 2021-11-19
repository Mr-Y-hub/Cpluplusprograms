#include <iostream>
using namespace std;
int main(){
    char str='y';
    int a= sizeof (str);
    cout<<a<<endl;
	char *p ;
	p=&str;
	cout<<*p;
}
