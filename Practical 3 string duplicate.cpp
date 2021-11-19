#include<iostream>
#include<string>
using namespace std;
int main(int argc,char **argv)
{
string str,str2;
int freq[10];
int k=1,count=0;
if (argc>1)
{
	str=argv[1];
}

else{

cout<<"\t\t\t\t\tENTER THE STRING I WILL GIVE YOU DUPLICATES "<<endl;
cin>>str;
}
int j;
int n= str.size();
cout<<"\n\n\t\t\t\t\tSIZE OF YOUR STRING IS"<<"\t"<<n<<endl;
str2[0]=str[0];
for ( int i=1;i<n;i++)
{
	for (  j=0;j<k;j++)
	    {
		if ( str[i]==str2[j])
			break;}
			if (j==k)
		    {
			str2[j]=str[i];
			k++;
	}
						
}
cout<<"\t\t\t\t\tYOUR STRING IS\t"<<str<<endl;

cout<<"\n\n\t\t\t\t\tDUPLICATES ELEMENTS ARE"<<endl;
for( int i=0;i<k;i++)
{
	cout<<"\t\t\t\t\t\t"<<str2[i]<<endl;
}
int p=0;
for ( int i=0;i<k;i++)
{   
	for ( int j=0;j<n;j++ )
	{
	    if( str2[i]==str[j])
	  count++;
    }
    freq[p]=count;
    count=0;
    p++;
}
cout<<"\n";
cout<<"\t\t\t\t\tNUMBER OF DUPLICATES ARE"<<endl;\
cout<<"\t\t\t\t\tLETTER\t\tFREQUENCY"<<endl;
for ( int i=0;i<k;i++)
{
	cout<<"\t\t\t\t\t"<<str2[i]<<"\t\t"<<freq[i]<<endl;
}

}
