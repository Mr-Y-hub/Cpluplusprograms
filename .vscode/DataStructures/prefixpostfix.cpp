//infix to postfix expression
#include <iostream>
using namespace std;
template <class T>
class class_stack
{
public:
    T st[100];
    int n = 100;
    int top = -1;
    void push(T val);
    void pop();
    void display();
    int isempty();
    T tops();
};

template <typename T>
T class_stack<T>::tops()
{
    return st[top];
}
template <typename T>
void class_stack<T>::push(T val)
{
    if (top >= n - 1)
        cout << "Stack Overflow" << endl;
    else
    {
        top++;
        st[top] = val;
    }
}
template <typename T>
void class_stack<T>::pop()
{
        top--;
}
template <typename T>
void class_stack<T>::display()
{
    if (top >= 0)
    {
        cout << "Stack elements are:";
        for (int i = top; i >= 0; i--)
            cout << st[i] << " ";
        cout << endl;
    }
    else
        cout << "Stack is empty";
}
template <typename T>
int class_stack<T>::isempty()
{
    if (top == -1)
    {
        return 1;
    }
    return 0;
}
template <class T>
class class_postfix : public class_stack<T>
{
public:
    int precedence(char ch);
    string calc(string str);
    int eqlorhigher(char op1, char op2);
};
template <class T>
int class_postfix<T>:: eqlorhigher(char op1, char op2)
{
    int p1 = precedence(op1);
	int p2 = precedence(op2);
	if (p1 == p2)
	{
		if (op1 == '^')
			return false;
		return true;
	}
	return (p1 > p2 ? true : false);
}
template <class T>
int class_postfix<T>::precedence(char ch)
{
    if (ch == '^')
    {
        return 3;
    }
    else if (ch == '*' || ch == '/')
    {
        return 2;
    }
    else if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else
        return -1;
}
template <class T>
string class_postfix<T>::calc(string str)
{
    string result;
    char c;
    this->push('(');
    for (int i = 0; i < str.length(); i++)
    {   
        
        c = str[i]; //K + L - M*N + (O^P) * W/U/V * T + Q
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            result += c;
        else if(c=='(')
        {
           this->push('(');
        }
        else if(c == '+' || c == '-' || c == '*' || c == '/' || c == '^') {
            while (!this->isempty() && eqlorhigher(this->tops(), c))
			{
				result += this->tops();
				this->pop();
			}
			this->push(c);
        }
        else if(c == ')') {
            while(!this->isempty() && this->tops() != '(')
            {
                result += this->tops();
                this->pop();
            }
            this->pop();
        }

    }
    cout<<result;
}
int main()
{
    int ch, val;
    class_postfix<char> cl;
    cl.calc("K + L - M*N + (O^P) * W/U/V * T + Q)");
    return 0;
}
