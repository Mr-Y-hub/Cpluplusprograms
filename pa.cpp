#include <iostream> 
using namespace std; 
class P
{
	public:
		virtual void print()
		{
			cout<<"Inside P"<<endl;
		}
};
class Q: public P
{
	public:
		void print ()
		{
			cout<<" inside Q"<<endl;
		}
};
class R : public Q
{
	
};
int main()
{
	R r;
	r.print();
	
 } 
  

