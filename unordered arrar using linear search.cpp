#include <iostream>
using namespace std;
int main()
{
int size,snum,flag,i;
cout<<"\t\t\tENTER THE NUMBER OF ELEMENTS IN THE ARRAY ( UNORDERED) "<<endl;
cin>>size;  
cout<<"\t\t\t  SIZE OF AN ARRAY IS\t"<<size<<endl;
int A[size];
cout<<"\t\t\tENTER ELEMEMTS"<<endl;
for(int h=0;h<size;h++)
{
	cin>>A[h];
}


cout<<"\t\t\tENTER A NUMBER YOU WANT TO SEARCH"<<endl;
cin>>snum;
for ( i=0;i<size;i++)
{
	if ( A[i]==snum)
	    { flag=i+1;
	    break;
		}
}
if (i==size)
cout<<"NOT FOUND"<<endl;
else{

	if ( flag>0 && flag<((size/2)-1))
	cout<<"NUMBER IS FOUND AT BEGINNING"<<" AND AT POSITION  "<<flag<<endl;
	else if( flag>=((size/2)+1) && flag<=size)
	cout<<"NUMBER IS FOUND AT END"<<" AND AT POSITION  "<<flag<<endl;
	else if( flag>=((size/2)-1) && flag<=((size/2)+1 ))
	cout<<"NUMBER IS FOUND AT MIDDLE"<<" AND AT POSITION  "<<flag<<endl;
    cout<<"TOTAL NUMBER OF COMPARISION IS "<<flag<<endl;
}
return 0;
}

