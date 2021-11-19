#include <iostream>
#include <stdexcept>
using namespace std;

int largest_proper_divisor(int n)
{
	if (n==0){
		throw invalid_argumnent("largest");

	}
	if (n==1)
	{
		throw invalid_argument(" Largest ");
		
	}
	for (int i= n/2; i>- 1; --i) {
		if (n%i == 0){
			return i;
			
		}
	}
	return -1;
}

void processs_input(int n)
{
	int d;
	try{
		d= largest_proper_division(n);
	}
	catch(char **msg)
	{
		cout<<msg<<endl;
	}
	cout<< " Result "<<d<<endl;
}
int main()
{
	int n;
	cin>>n;
	process_input(n);
	return 0;
	
}
