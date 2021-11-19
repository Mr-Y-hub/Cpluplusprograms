#include <iostream>
using namespace std;

struct student{
	char name[20],course[20];
	int year,rollno,marks;
};

int main(){
	char y;
	FILE *fp;
    student s;
    do{
    int choice;

    cout<<"ENTER 1 : To write the details of the student !"<<endl;
    cout<<"ENTER 2 : To display the details of the student ! "<<endl;
    cin>>choice;
    switch(choice){
    	case 1:
    		cout<<"Enter the name of the student : "<<endl;
    		cin>>s.name;
  			cout<<"Enter the course of the student : "<<endl;
  		    cin>>s.course;
    		cout<<"Enter the Roll number of the student : "<<endl;
    		cin>>s.rollno;
    		cout<<"Enter the year in which the student is  : "<<endl;
    		cin>>s.year;
    		cout<<"Enter the marks of the student : "<<endl;
    		cin>>s.marks;
    		fp=fopen("data.txt","a");
    		fwrite(&s,sizeof(s),1,fp);
    		fclose(fp);
    		break;
    	case 2:
        fp=	fopen("data.txt","r");
        fread(&s,sizeof(s),1,fp);
        while(!feof(fp)){
    	cout<<"Name is : "<<s.name<<endl<<"Course is "<<s.course<<endl<<"Year is "<<s.year<<endl<<"Roll Number is "<<s.rollno<<endl<<"Marks obtained : "<<s.marks<<endl;
	    fread(&s,sizeof(s),1,fp);
				}
	    
	    fclose(fp);
		break;
		default: 
		cout<<"Enter valid option !!"<<endl;
	
}
	cout<<"Enter y or Y to continue ,or any other key to exit !"<<endl;
	cin>>y;
	system("CLS");
	}
	while(y=='y' || y=='Y');
}

