#include <iostream>
using namespace std;
double exp(int j, int k)
{int result=1;
       for(int i=1;i<=k;i++)
      { result=result*j;}
      return result;
}
int main( int argc, char **argv)
{int n;
if (argc>1)
{o
int n= argv[1][0]-48;	
}
else
{

cout<<"\t\t\t\t\t\tENTER A NUMBER YOU WANT TO COMPLETE THIS SERIES"<<endl;
cin>>n;
cout<<"the series up to "<<n<<" is..........................................."<<endl;
cout<<"then answer is "<<endl;
}
double result=1.0;

 for(int i=2;i<=n;i++)
    {
	 if(i%2==0)
     result -= (1.0/(exp(i,i)));
	 
      else 
               result += (1.0/(exp(i,i)));
	                            
     } 
cout<<"result\t"<<result;

}
