#include <iostream>
#include <math.h>
using namespace std;

class graphs
{
	int n;
	int **a;

public:
	void check();
	void display();
	void input();
};

void graphs::input()
{
	cout << "Enter the number of vertices in graph" << endl;
	cin >> n;
	a = new int *[n];
	for (int i = 0; i < n; i++)
		a[i] = new int[n];
	cout << "Enter the matrix" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	}
}

void graphs::display()
{
	cout << "The matrix is " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

void graphs::check()
{
	int c = 0, s = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			if (i != j)
			{
				if (a[i][j] != 1)
				{
					/* code */
					s++;
				}
			}
	}
	int p = pow(n, 2);
	if (s != 0)
		cout << "It is not a complete graph" << endl;
	else
		cout << "It is a complete graph" << endl;
}
int main()
{
	graphs g1;
	g1.input();
	g1.display();
	g1.check();
}