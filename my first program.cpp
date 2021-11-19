#include <iostream>
using namespace std;                   
int add(int j,int k) 
 {
 	 int z=1;
   for(int i=1;i<=k;i++)
    z=z*j ;
   return z;
   }
 

int main ()                             
{ 
    int x,y,z;
	cin>>x>>y;
	z=add(x,y);
	cout<<"result"<<"\t"<<z ;
	return 0;                                                                    


}

