#include <iostream>
using namespace std;
class process
{
public:
	int n; 
	int bt[20], wt[20], tt[20];
	int avwt = 0, avtat = 0;
	void enter();
	void waitingtime();
	void turnaroundtime();
	void display();
	void average();
	void grantchart();
};

void process ::enter()
{	
	cout<<"First Come First Serve"<<endl;
	cout << "Enter total number of processes:";
	cin >> n;
	cout << "\nEnter Process Burst Time\n";
	for (int i = 0; i < n; i++)
	{
		cout << "P[" << i + 1 << "]:";
		cin >> bt[i];
	}
}

void process ::waitingtime()
{
	wt[0] = 0;
	for (int i = 1; i < n; i++)
	{
		wt[i] = 0;
		for (int j = 0; j < i; j++)
			wt[i] += bt[j];
	}
}
void process ::turnaroundtime()
{
	//calculating turnaround time
	for (int i = 0; i < n; i++)
	{
		tt[i] = bt[i] + wt[i];
		avwt += wt[i];
		avtat += tt[i];
	}
}
void process ::display()
{
	cout << "\nPID"
		 << "\t"
		 << "BT\t"
		 << "WT"
		 << "\t"
		 << "TT";
	for (int i = 0; i < n; i++)
	{
		cout << "\nP[" << i + 1 << "]"
			 << "\t" << bt[i] << "\t" << wt[i] << "\t" << tt[i];
	}
}
void process ::average()
{
	avwt /= n;
	avtat /= n;
	cout << "\n\nAverage Waiting Time:" << avwt;
	cout << "\nAverage Turnaround Time:" << avtat;
}
void process ::grantchart()
{	
	//Upper Row
	
	for (int i = 0; i < n; i++)
	{	cout<<"*";
		for (int j = 0; j < 2*bt[i]; j++)
		{
			cout<<"-";
		}
	}
	//Middle row 
	cout<<endl;
	for (int i = 0; i < n; i++)
	{	
		cout<<"|";
		for (int j=0;j<bt[i]-1;j++)
		{
			cout<<" ";
		}
		cout<<"P"<<i+1;
		for (int j=0;j<bt[i]-1;j++)
		{
			cout<<" ";
		}
		
	}
	cout<<"|";
	//Middle row
	cout<<endl;
	for (int i = 0; i < n; i++)
	{	cout<<"*";
		for (int j = 0; j < 2*bt[i]; j++)
		{
			cout<<"-";
		}
	}
	// Middle row 
	cout<<endl;
	cout<<"0";
	for (int i = 0; i < n; i++)
	{	
		for (int j = 0; j < 2*bt[i]; j++)
		{
			cout<<" ";
		}
		cout<<tt[i];	
	}	
}

int main()
{
	process p1;
	p1.enter();
	p1.waitingtime();
	p1.turnaroundtime();
	cout<<endl;
	cout<<"-----------GANTT CHART------"<<endl;
	p1.grantchart();
	cout<<endl;
	cout<<"------------TABLE----------"<<endl;
	p1.display();
	p1.average();
	return 0;
}