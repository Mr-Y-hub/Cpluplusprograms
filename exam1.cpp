#include <iostream>
using namespace std;

int convertDate(int m,int d,int y){
	switch(m){
		case 1 :
			cout<<"January";
				break;
		case 2:
			cout<<"February";
				break;
		case 3:
			cout<<"March";
				break;
		case 4:
		cout<<"April";
			break;
		case 5:
		cout<<"May";
			break;
		case 6:
			cout<<"June";
				break;
		case 7:
			cout<<"July";
				break;
		case 8:
			cout<<"august";
				break;
		case 9:
			cout<<"september";
				break;
	    case 10:
			cout<<"october";
				break;
	    case 11:
			cout<<"Nov";
				break;
		case 12: 
		cout<<"december";
			break;
				
	}
		cout<<d<<",";
    	cout<<y;
}
bool check (int m , int d, int y)
{
	if (m<7)
	{
		if (m%2==0 || m < 31)
		
		
	}
}
int  main(){
	int m,d,y;
	cout<<"Month"<<endl;
	try{
	cin>>m;
	if(m>12 || m<1)
	throw("Error : enter valid month ");
	cout<<"Day"<<endl;
	cin>>d;
	if(check()){
	throw("Error : Enter valid day");
}
	cout<<"Year";
	cin>>y;
	if(m==2 && d==29 && !((y%4==0) && (y%100!=0)|| (y%400==0))){
	throw("Error : enter a leap");
}
	convertDate(m,d,y);
}
catch(const char* msg){
	cout<<msg<<endl;
	exit(0);
}
}
