#include <iostream>
using namespace std;
class A
{	public:
	void print (){
		cout<<" Base classs"<<endl;
	}
	virtual void S()
	{
		cout<<" A"<<endl;
	}
};
class B: public A{
	public :
		
		void print (){
			cout<<"Derived Class"<<endl;
		}

};	
class C : public B
{   public :
	void S ()
	{
	cout<<"c derived"<<endl;
}};

int main()
{   A *a; 

	a->S();	

	return 0;
}




