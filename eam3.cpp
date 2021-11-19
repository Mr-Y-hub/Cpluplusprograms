#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <string>
using namespace std;
// int convertDate(int m,int d,int y){
// 	switch(m){
// 		case 1 :
// 			cout<<"January";
// 				break;
// 		case 2:
// 			cout<<"February";
// 				break;
// 		case 3:
// 			cout<<"March";
// 				break;
// 		case 4:
// 		cout<<"April";
// 			break;
// 		case 5:
// 		cout<<"May";
// 			break;
// 		case 6:
// 			cout<<"June";
// 				break;
// 		case 7:
// 			cout<<"July";
// 				break;
// 		case 8:
// 			cout<<"august";
// 				break;
// 		case 9:
// 			cout<<"September";
// 				break;
// 	    case 10:
// 			cout<<"October";
// 				break;
// 	    case 11:
// 			cout<<"November";
// 				break;
// 		case 12: 
// 		cout<<"December";
// 			break;
				
// 	}
// 		cout<<d<<",";
//     	cout<<y;
// }

// int main()
// {	
// 	try{
	
// 	int day,month,year;
// 	cin>>month;
// 	if (month>12 || month <1)
// 	throw 1;
// 	cin>>day;
	
// 	cin>>year;
// 	if(month==2 && day==29 && (year%4!=0 || year%100==0))
// 	{
// 		throw 1.0;
// 	}

// 	convertDate(month,day,year);
// }
// catch(int)
// {
// 	cout<<"Invalid Month";
// }
// catch (double)
// {
// 	cout<<" Invalid Year";
// }
	
// }
// int main()
// {
// 	string a;
// 	cin>>a;
// 	cout<<a[1];
// 	string c = a[1]- '0';
// 	int b;
// 	stringstream geek(c);
// 	geek >> b;
// 	cout<<b;
// }

#include <iostream>
using namespace std;
int main()
{
    //Initializing variables.
    char str[100];
    int i,sum = 0;
    
    //Accepting inputs.
    cout<<"Enter the string:";
    cin>>str;
    
    //Iterating each character through for loop.
    for (i= 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= '0') && (str[i] <= '9'))  //Checking for numeric characters.
        {
            
            sum += (str[i] - '0'); //Adding numeric characters.

        }
    }
    //Printing result.
	int a ,b,c;
	a = (str[0] - '0');
	b = (str[1] - '0');
	c = (str[2] - '0');
	cout<<a<<" "<<b<<" "<<c<<" "<<endl;
    cout<<"Sum of all digits:"<< sum;
    return 0; 
}