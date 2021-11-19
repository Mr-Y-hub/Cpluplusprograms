#include<iostream>
#include<string>
using namespace std;
void showadress()
     		       {string str;
					cout<<"\t\tEnter any string"<<endl;
	                 cin>>str;
					 int length=str.size();
     		       	for ( int i=0;i< length;i++)
     		       	cout<<"Adress of character "<<str[i]<<"is :"<<"/t"<<&str<<endl;
					}
void concate()
    { 			
		int p=0;
	               string str1;
	               string str2;
		           string str;
     		       cout<<" Enter two string "<<endl;
     		       cin>>str1>>str2;
     		       int len1=str1.size();
     		       int len2=str2.size();
     		       int k=len1+len2;
     		       
     		       for( int i=0;i<len1;i++)
     		        str[i]=str1[i];   
     		        for ( int j=0;j<len2;j++)
					str[j+len1]=str2[j];   
     		    	for ( int m=0;m<k;m++)
     		    	cout<<str[m];
        }
		                                
 void compare()
 {					int flag;
 	               string str1;
	               string str2;
		           string str;
     		       cout<<" Enter two string "<<endl;
     		       cin>>str1>>str2;
     		        int len1=str1.size();
     		       int len2=str2.size();
     		       if (len1 != len2)
     		        cout<<"different"<<endl;
 					else
					 {
					 	for ( int i=0;i<len1;i++)
					 	{
					 		if ( str[i]==str[i])
					 		flag=0;
						 }
						 if ( flag==0)
						 cout<<"DIFFERENT"<<endl;
						 else
						 cout<<"same"<<endl;
										}    		       
			 } 
void strlength(	char *str )
{	int length=0;
	while(*str != '\0')
	{
	*str++;
	length++;	
	}
	cout<<"length "<<length<<endl;
	}
	
void lowertoupper( char * ptr)
{   char c= *ptr;
   while (*ptr !='\0')
   {
   	if ( c>95)
   	c=c-32;
   	cout<<c;
   	*ptr++;
   	c=*ptr;
   }
	cout<<endl;
	}	
	
void reverse( string p)
{
	int n=p.size();
	for ( int i=0;i< n/2;i++)
		swap(p[i],p[n-i-1]);
		cout<<"reversed string is\t"<<p<<endl;
							}				    		

int main()
{    cout<<"\t\t\tTHIS PROGRAM IS MENU DRIVEN PROGRAM\n"<<endl;
	string str;
	int num;
	
	char c;
     do {
     	cout<<"\t\t\t\t\tMENU\n"<<endl;
     	cout<<"\t\tPress 1 Show address of each character in string"<<endl;
		cout<<"\t\tPress 2 Concatenate two strings."<<endl;
		cout<<"\t\tPress 3 Compare two strings"<<endl;
		cout<<"\t\tPress 4 Calculate length of the string (use pointers)"<<endl;
		cout<<"\t\tPress 5 Convert all lowercase characters to uppercase"<<endl;
		cout<<"\t\tPress 6 Reverse the string !!"<<endl;
        cout<<"enter your choice"<<endl;
		cin>>num;
	    int length;
	    
     	switch(num)
     	{
     	case 1 : showadress();
				break;
     	case 2 :  concate();
     	        break;
		case 3 :  compare();
				break;
			
		case 4 :  char ca[100];
		       cout<<" enter word to find length"<<endl;
            	cin>>ca;
				strlength(ca);
				break;
		case 5 :  char da[100];
		       cout<<" enter word to find its in upppercase"<<endl;
            	cin>>da;
				lowertoupper(da);
				break;
			
		case 6 :  string str;
		            cout<<"enter word to find to reverse"<<endl;
		            cin>>str;
		            reverse(str);
			break;
			
		Default :
	             	cout<<" You enter wrong number "<<endl;
			
		}
     cout<<" Press y/Y to continue and press any key to cancel"<<endl;	
	 cin>>c;
	 } while (c=='Y' || c=='y');
}
