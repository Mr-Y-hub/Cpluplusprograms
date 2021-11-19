#include <iostream>
using namespace std;
class Triangle
{
	private :
		int b;
		int h;
		double  a;
	public:	
	Triangle ()
	{
		b=1;
		h=1;	
				}					
	void operator = (const Triangle &obj)
	{
		b=obj.b;
		h=obj.h;
				}			
	void setd( double base  , double  height)
	{
		b=base;			
		h=height; 
	}
	void area ( )
	{
		a = float ( ( b * h ) / 2);
		cout <<" Area is :"<<a<<endl;
		cout << " Default Arguments"<<endl;
	}
	void area ( double  b , double h)
	{
		a = ( b * h ) / 2;
		cout <<" Area is :"<<a<<endl;
		cout << " Float Arguments"<<endl;
	}
	void area( int b, int h )
	{
			a = ( b * h )/ 2;
		cout <<" Area is :"<<a<<endl;
		cout << " int Arguments"<<endl;
	}
	void Display()
		{
			cout<<"base\t=="<<b<<endl;
			cout<<"height\t=="<<h<<endl;
		}
};

int main()
{
  Triangle T1,T2,T3;
  T1.area();
  T1.area(3,5);
  T1.area(3.0,5.0);
  T1.setd(9,8);
  T1.Display();
  T2=T1;
  T2.Display();
}
