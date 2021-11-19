#include <iostream>
using namespace std;
class  MyClass{
	public:
		int x;
		static int count;
		
		MyClass()
		{
			
			count++;}
};
int MyClass::count=0;
int main ()
{
	cout<<"initial count  "<<MyClass::count;
	MyClass obj1;
	cout<<"count after one object"<<MyClass::count<< endl;
		MyClass obj2;
	cout<<"count after second  object"<<MyClass::count<< endl;
	return 0;
}
