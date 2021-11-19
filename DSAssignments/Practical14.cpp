/* 
 Name :- Yash Patidar 
 ROll NO:- 20558 
 Mail:- yash.20558@sscbs.du.ac.in 
*/
#include <iostream>
#include <cmath>
using namespace std;
//function 1
int fun1(int n)
{
    if (n == 0)
        return 1;
    else
        return (n + fun1(n - 1));
}
//function2
int fun2(int n)
{
    if (n == 0)
        return 1;
    else
        return (pow(n, 2) + fun2(n - 1));
}
//function3
int fun3(int n)
{
    if (n == 0)
        return 1;
    else
        return (n + (2 * fun3(n / 2)));
}
int main()
{
    int n, c;
    cout << "Value of recurrence relation :" << endl;
    cout << "\n";
    cout << "1. T(n)= T(n-1)+n ,T(0)=1 " << endl;
    cout << "2. T(n)= T(n-1)+n^2,T(0)=1 " << endl;
    cout << "3. T(n)= 2*T(n/2)+n,T(1)=1 " << endl;
    cout << "\nEnter your choices :";
    cin >> c;
    if ((c > 3) || (c <= 0))
        cout << "Error : input a right choice ";
    cout << "\nEnter the value for n : ";
    cin >> n;
    if (c == 1)
    {
        int r = fun1(n);
        //call fun1
        cout << "\nResult : " << r << endl;
    }
    else if (c == 2)
    {
        int r = fun2(n);
        //call fun2
        cout << "\nResult : " << r << endl;
    }
    else if (c == 3)
    {
        int r = fun3(n);
        //call fun3
        cout << "\nResult : " << r << endl;
    }
    return 0;
}
