#include <iostream>
using namespace std;
class A
{

	public:
	 void func()
		{
			cout<<"A"<<endl;
		}	
};
class B : public A
{
	public:
		virtual void func()
		{
			cout<<"B"<<endl;
		}
	
};
class C : public B{
	public:
		void func()
		{
			cout<<"c"<<endl;
		}
};
void f(B &p)
{
	p.func();
}
int main()
{
   A a;
   B b;
   C c;
   f(a);
   f(b);
   f(c);
	
	
    
}
