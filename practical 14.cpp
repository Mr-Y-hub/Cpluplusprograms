
#include <iostream>
#include <ctype.h>
using namespace std;

int main(){
	char a[20],b[20];
	FILE *f1,*f2;
	cout<<" \tThis is the program to copy the data from one file to another "<<endl;
	cout<<" \tEnter a file where you want to copy "<<endl;
	cout<<" \t!!Also enter extension of file  "<<endl;
	cin>>a;
	f1 = fopen(a,"r");
	if (f1==NULL)
	{	
		cout<<"The file name you have entered cannot open"<<endl;
		exit(0);
	}
	cout<<" \t\t\tEnter a file where you want to write"<<endl;
	cin>>b;
	f2 = fopen(b,"w");
	char c = fgetc(f1);
	
	while (c != EOF) 
	{
		if (!isspace(c))
		fputc(c,f2);
		c=fgetc(f1);
	}
	fclose(f1);
	fclose(f2);		
	cout<<" The file is being copied"<<endl;
	
}

