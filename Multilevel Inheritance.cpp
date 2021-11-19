#include <iostream>
using namespace std;
class base 
{
	protected :
		int i;
		int j;
		public:
			void set(int a, int b)
			{
				i=a;
				j=b;
			}
			void show ()
			{
			cout<<i<<""<<j<<""<<endl;	
			}
};
class derived1: public base
{
	int k;
	public:
		void setk ()
		{
			k=i*j;
		}
		void showk ()
		{
			cout<<k<<endl;
		}
};
class derived2 : public derived1
{
	int m;
	public:
		void setm (){m=i-j;
		}
		void showm(){
			cout<<" m"<<m<<endl;
			
		}
};
int main()
{
	derived1 ob1;
	derived2 ob2;
	ob1.set(2,3);
	ob1.show();
	ob1.setk();
	ob1.showk();
	cout<<endl;
	
	
	ob2.set(3,4);
	ob2.show();
	ob2.setk();
	ob2.showk();
	ob2.setm();
	ob2.showm();
	
}
