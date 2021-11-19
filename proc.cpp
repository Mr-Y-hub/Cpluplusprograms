#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{	
	int ch;
	int memory;
	cout<<"1.Print Kernel version";
	cout<<"\n2.Print CPU info";
	cout<<"\n3.Print Memory info";
	cout<<"\nEnter your choice : ";
    cin>>ch;
	
	switch (ch) {
	case 1 :
		printf("\nKernel version\n");
		system("cat /proc/version|awk '{print $1,$2, $3}'");
	
    case 2 :
			cout<<"\nCPU Type:\n";			
			system("cat /proc/cpuinfo|awk 'NR==3'");// CPU family
			system("cat /proc/cpuinfo|awk 'NR==8'");// CPU MHz
			system("cat /proc/cpuinfo|awk 'NR==13'");//number of cores
			cout<<"\nCPU Model:\n";
			system("cat /proc/cpuinfo|awk 'NR==5'|awk ' {print $4,$5,$6,$8,$9}'");
	case 3:
			cout<<"\nConfigured Memory :\n";
			system("cat /proc/meminfo|awk 'NR==1'|awk '{print $2,$3}'");
			cout<<"\nmem="<<memory;
			cout<<"\nFree Memory :\n";
			system("cat /proc/meminfo|awk 'NR==2'|awk ' {print $2,$3}'");
		}
	return 0;
}
