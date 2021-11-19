#include <iostream>
using namespace std;
class Base 
{
private :
	
protected:
	
	int a,b;
	public:
	Base()
	{	cout<<" Show"<<endl;
		a=5;b=6;
	}
	void show()
	{
	
	}
	
};
class Derived : public Base
{
 public:
	
};

class Square :  public Base
{
		
};

class Rectangle 
{
	
};

int main()
{
	
	Derived D;
	
	
	
return 0;
}
