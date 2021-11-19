#include <iostream>
#include <string>
using namespace std;

class Complex       //complex name class 
{
        int real;     
        int imag;

    public:
    	Complex(int r=0 , int i=0){
            real=r;
            imag=i;
        }
        
        friend ostream& operator<<(ostream& out,const Complex& c);             //output
        friend istream& operator>>(istream& input, Complex& c);                   //input
        friend Complex operator+(Complex c1,Complex c2);                       //addition
        friend bool operator==(Complex c1,Complex c2);                         //Condition 


        
       
       
}


Complex operator+(Complex c1,Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

bool operator==(Complex c1,Complex c2)
{
    if(c1.real == c2.real && c1.imag == c2.imag)
        return true;
    return false;

}

ostream& operator<<(ostream& output, const Complex& c)
{
    output<<c.real<<" + "<<c.imag<<"i "<<endl;
    return output;
}

istream& operator>>(istream& input, Complex& c)
{
    cout<<"Enter complex number with real and imaginary parts seperated by spaces:";
    input>>c.real>>c.imag;
    cout<<endl;
    return input;
}

//every object has its own identity


int main()
{
    Complex c1,c2;
    cin>>c1>>c2;
    cout<<"first number "<<c1<<endl;
    cout<<" second number"<<c2<<endl;

    if(c1==c2)
    cout<<"Both complex number are same";
    else
    cout<<"Both complex number are different";

    Complex c3 = c1 + c2;		//same as c1.add(c2)
    cout<<"\nSum: "<<c3;
    
    return 0;
}









