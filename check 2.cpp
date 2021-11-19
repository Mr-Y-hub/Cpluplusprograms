#include <iostream>
using namespace std;

	void Execute( int &x, int y=200)
	{
		int temp = x+y;
		x+=temp;
		if (y!=200)
		cout<<temp<<x<<y<<"--";
	}

int main()
{
	int a=50,b=20;
	cout<<a<<b<<"--";
	Execute(a,b);
	cout<<a<<b<<"--";
	return 0;
}
