#include <iostream>
#include <stdlib.h>
using namespace std;
int lsearch ( int , int);
int main()
{
int size,num;
cout<<"\t\t\tENTER THE NUMBER OF ELEMENTS IN THE ARRAY (ordered) "<<endl;
cin>>size;  
cout<<"\t\t\t  SIZE OF AN ARRAY IS\t"<<size<<endl;
int A[size];
cout<<"\t\t\tENTER ELEMEMTS"<<endl;
for(int h=0;h<size;h++)
{
	cin>>A[h];
}
label:
cout<<"\t\t\tWhich searching you want to do "<<endl;
cout<<"\t\t\t\tPress 1 for Linear search"<<endl;
cout<<"\t\t\t\tPress 2 for Binary search"<<endl;
cin>>num;
if(num==1)
{
 lsearch(size,A[size]);
}
else if (num==2)
{
//	bsearch();
}
else 
{
	cout<<"YOU ENTER WRONG NUMBER"<<endl;
	goto label;
	system("CLS");
}



}

int lsearch ( int a, int arr[100])
{	int snum,flag,i;
	cout<<"DOING LINEAR SEARCH         WHICH ARRAY YOU WANT TO SEARCH"<<endl;
	cin>>snum;
	for ( i=0;i<a;i++)
{
	if ( arr[i]==snum)
	    { flag=i+1;
	    break;
		}
}
if (i==a)
cout<<"NOT FOUND"<<endl;
else{

	if ( flag>0 && flag<((a/2)-1))
	cout<<"\t\t\tNUMBER IS FOUND AT BEGINNING"<<" AND AT POSITION  "<<flag<<endl;
	else if( flag>=((a/2)+1) && flag<=a)
	cout<<"\t\t\tNUMBER IS FOUND AT END"<<" AND AT POSITION  "<<flag<<endl;
	else if( flag>=((a/2)-1) && flag<=((a/2)+1 ))
	cout<<"\t\t\tNUMBER IS FOUND AT MIDDLE"<<" AND AT POSITION  "<<flag<<endl;
    cout<<"\t\t\tTOTAL NUMBER OF COMPARISION IS  "<<flag<<endl;
}
	return 0;
}
