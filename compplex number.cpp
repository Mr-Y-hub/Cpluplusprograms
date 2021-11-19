#include <iostream>
using namespace std;
class Complex
{
	private:
		int real;
		int imag;
	public:
		Complex ( int,int);
		
		friend Complex operator+(Complex c1,Complex c2);  
	
		void output ()
		{
		   cout<<real<<endl;
		   cout<<imag<<endl;		
		}
			
};

	 Complex :: Complex ( int m=0, int n=0)
	{
		real=m,imag=n;
	}
	Complex operator+(Complex p, Complex q){
			Complex a;
			a.real = p.real + q.real;
			a.imag = p.imag + q.imag;
			return a;
			
		}
int main()
{
	Complex p(3,4),q(3,4);
	Complex k = p + q;
	k.output();	
}
