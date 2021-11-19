   #include<bits/stdc++.h>
  using namespace std;
  long long int volume (int a,int b, int c)
  {
  	long long int p=a;
  	long long int q=b;
	long long int r=c;
	  return p*q*r;
	  }
   int main()
   {
   	int a=1039;
	 int b=3749;
	int c=8473;
	// you can't change the data type of a,b,c
	 cout<<volume(a,b,c);
	  
   	
   }
   
