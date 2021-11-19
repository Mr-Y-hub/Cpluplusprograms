#include <iostream>
using namespace std;

class Stackaddition
{
public:
    int stack[100], n = 100, top = -1;
    void push(int val)
    {
        if (top >= n - 1)
            cout << "Stack Overflow" << endl;
        else
        {
            top++;
            stack[top] = val;
        }
    }
    int pop()
    {   
        int temp;
        if (top <= -1)
            cout << "Stack Underflow" << endl;
        else
        {
            cout << "The popped element is " << stack[top] << endl;
            temp=stack[top];
            top--;
            return temp;
        }
    }
    void display()
    {
        if (top >= 0)
        {
            cout << "Stack elements are:";
            for (int i = top; i >= 0; i--)
                cout << stack[i] << " ";
            cout << endl;
        }
        else
            cout << "Stack is empty";
    }
};
int main()
{
    int ch, val;
    string num1, num2;
    Stackaddition s1;
    
    Stackaddition s2;
    Stackaddition t;
    cout << "This is the program to add Large numbers" << endl;
    cout << "Enter Number 1" << endl;
    cin >> num1;
    cout << "Enter Number 2" << endl;
    cin >> num2;
    for (int i = 0; num1[i] != '\0'; i++)
    {
        val = (num1[i] - '0');
        s1.push(val);
    }

    s1.display();
 
    for (int i = 0; num2[i] != '\0'; i++)
    {
        val = (num2[i] - '0');
        s2.push(val);
    }

    s2.display();
    int carry =0;
    int n1,n2, sum;
    for ( int i= 0; num1[i] != '\0'; i++)
    {   
        n1=s1.pop();
        n2=s2.pop();
        sum=n1+n2+carry;
        carry=0;
        t.push(sum%10);
        if (sum > 9) 
        {
            carry=1;
        }
    }
    t.display();

    return 0;
}