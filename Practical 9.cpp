#include <iostream>
#include <string.h>
using namespace std;

class Person
{
	public:
		string name;
    virtual void display()
	{
	cout<<" the name is "<<name<<endl;
	}
};
class Student : public Person 
{
	public:
	string course;
	int marks, year;
	void display()
	{

	cout<<" Courses are "<<course<<endl;
	cout<<" Marks are "<<marks<<endl;
	cout<<" Years are "<<year<<endl;
}};
class Employee : public Person
{
	public:
		string dept;
		int salary;
		void display()
		{	
		cout<<" salary are "<<salary<<endl;
		cout<<" Department are "<<dept<<endl;
		}
	
};
int main()
{
	Person *ptr = new Person;
	ptr->name = "Harry";
	
	Student s;
	s.marks = 45;
	s.year = 3;
	s.course = "bsc cs";

	Employee e;
	e.dept = "Computers";
	e.salary = 50000;
	ptr->display();
	ptr=&s;
	ptr->display();
	ptr=&e;
	ptr->display();
	
	return 0;
}

