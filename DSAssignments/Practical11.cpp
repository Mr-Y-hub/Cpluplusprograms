#include<iostream>
using namespace std;

 int fact(int n);
 
int Combinations(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 
// Returns factorial of n
int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

 int Permutations(int n,int r)
 {
	 fact(n) / fact(n - r);
 }

int main()
{
	int n,r;
	cout<<"Enter the value of n and r"<<endl;
	cin>>n>>r;
	cout<<"Total number of combinations using formula nCr is "<<Combinations(n,r)<<endl;
	cout<<"Total number of permutations using formula nPr is "<<Permutations(n,r)<<endl;
	return 0;
}