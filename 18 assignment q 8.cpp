#include <iostream>
#include <ctype.h>
using namespace std;
//a-source file b-target file

int main(){
	char a[20],b[20];
	FILE *f1,*f2;
	cout<<" This is the program to copy the data from one file to another "<<endl;
	cout<<" Enter a file where you want to copy "<<endl;
	cin>>a;
	f1 = fopen(a,"r");
	if (f1==NULL)
	{	
		cout<<"error occured !"<<endl;
		exit(0); //return 0;
	}
	cout<<" Enter a file where you want to write i.e target file"<<endl;
	cin>>b;
	f2 = fopen(b,"w");
		if (f2==NULL)
	{	
		cout<<"error occured !"<<endl;
		exit(0); //return 0;
	}
	char c = fgetc(f1);
	while (c != EOF) 
	{
		if (!isspace(c))
		fputc(c,f2);
		c=fgetc(f1);
	}
	fclose(f1);
	fclose(f2);	
	cout<<endl;	
	cout<<" file successfully copied"<<endl;
	return 0;
}
