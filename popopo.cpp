#include<iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("data1.txt");
	if(!fout)
	{
		cout<<"File Not Opening"<<endl;
	}
	fout.close();
	if(fout.fail())
	{
		cout<<"Not closing File"<<endl;
	}
	cout<<"Program Completed"<<endl;
	return 0;
	
}
