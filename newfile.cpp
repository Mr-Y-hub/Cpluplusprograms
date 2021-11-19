#include<iostream> 
using namespace std; 
class A 
{
   private:
   int m,l,i;
   public:
   A()
   {
      m=0;
      i=0;
   }
   void input()
   {
      cout<<"Enter the degree of the tree"<<endl;
      cin>>m;
      cout<<"Enter the value of internal vertices";
      cin>>i;
      l=i*(m-1)+1;
   }
   void show()
   {
      cout<<"The Number of leaves are"<<l<<endl;
   } 

};
int main()
{  
   A a;
   a.input();
   a.show();
}


