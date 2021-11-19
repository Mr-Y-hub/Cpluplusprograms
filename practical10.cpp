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
	Triangle operator + ( const Triangle &obj)
	{
		Triangle a;
		a.b=b+obj.b;
		a.h=h+obj.h;
		return a;
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
 
   cout<<" This is the program to overload function and overload operator "<<endl;
   cout<<" Overloading Functions"<<endl;
  Triangle T1,T2,T3;
  T1.area();
  T1.area(3,5);
  T1.area(3.0,5.0);
  T1.setd(9,8);
  
  cout<<"\n\nOverloading OPerators"<<endl;
  T1.Display();
  T2=T1;
  cout<<" Assignment OPerator"<<endl;
  T2.Display();
  cout<<" Addition Operator"<<endl;
  T3=T2+T1;
  T3.Display();
}
