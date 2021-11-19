#include <iostream>
using namespace std;
template <class T>
class class_stack{
    public:
    T st[100];
    int n=100;
    int top=-1;
    void push( T val);
    void pop();
    void display();
};
template <typename T>
void class_stack <T> :: push(T val) {
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else {
      top++;
      st[top]=val;
   }
}
template <typename T>
void class_stack<T> :: pop() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< st[top] <<endl;
      top--;
   }
}
template <typename T>
void class_stack<T> :: display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
        cout<<st[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty";
}
int main() {
   int ch, val;
   class_stack <char> cl;
   cl.push('a');
   cl.push('b');
   cl.push('c');
   cl.push('d');
   cl.push('e');
   cl.pop();
   cl.display();
 return 0;
}