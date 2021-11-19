#include <iostream>
using namespace std;
int main()
{ int A[10]={1,3,4,4,6,6,6,7,8,8};
   int B[10],j=0;
   for (int i=0;i<10;i++)
     
     for (int k=0;k<i;k++)
     { if (A[i]==B[k])
           B[k]=A[i];
     else 
	      A[j]=B[k];                   
     	  j++;
     }
           
}
