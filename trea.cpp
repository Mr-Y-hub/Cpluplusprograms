#include<iostream>
#include<fstream>
using namespace std;

int main ()
{
    int i, x, y;
    int data[10];
    ifstream f;
    f.open("DataF.txt");
    if (!f)
    cout<<" file not exist"<<endl;
    for(int i = 0; i < 3; i++)
        f>> data[i];
        for(int i = 0; i < 3; i++)
        cout<<data[i];
	f.close();
	if (f.fail())
{
		cout<<"close file"<<endl;
	}
	    return 0;
}
