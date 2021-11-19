#include <queue>
#include <iostream>
#include <vector>
using namespace std;
class process
{
public:
	int n, bt[100];
	int at[100];
    int wt[100], tat[100], avwt = 0, avtat = 0, quant, ft[100], fbt[100];
    vector <int> vec;
	void enter();
	void waitingtime();
	void run();
	void display();
	void average();
	int minimum();
	void turnaroundtime();
	int sum_of_bursttime();
};
int process :: sum_of_bursttime()
{
	int sum=0;
	for ( int i =0 ; i < n ; i++ )
	{
		sum+=bt[i];
	}
	return sum + at[0];
}
int process:: minimum()
{
	int i,min;
    min=bt[vec[0]];
    for ( i = 1 ; i< vec.size();i ++)
    {	
		if(bt[vec[i]]==0)
		continue;
        if(min>bt[vec[i]] || min ==0)
        {
            min=bt[vec[i]];
        }
    }
    for ( i=0;i<vec.size();i++)
	{
		if(min==bt[vec[i]])
		break;
	}
    return i;
}
void process ::enter()
{ 	
	cout<<"SHORTEST JOB FIRST REMAINING"<<endl;
	cout << "Enter total number of processes:";
	cin >> n;
	 cout << "\nEnter Process Burst Time\n";
	for (int i = 0; i < n; i++)
	{
		 cout << "P[" << i + 1 << "]:";
		 cin >> bt[i];
		fbt[i] = bt[i];
	}
     cout << "\nEnter Process Arrivial Time\n";
	 for (int i = 0; i < n; i++)
	 {
	 	cout << "P[" << i + 1 << "]:";
	 	cin >> at[i];
	 }
}

void process ::waitingtime()
{
	for ( int i = 0 ; i < n ; i++ )
	{
		wt[i]=tat[i]-fbt[i];
	}

}
void process ::turnaroundtime()
{
	for ( int i = 0 ; i < n ; i++ )
	{
		tat[i]=ft[i]-at[i];
	}
}
void process ::run()
{	
	int flag=0,proc=0,m;
	int s= sum_of_bursttime();
	int sp=0;
	for ( int i = at[0] ; i < s; i++)
	{	
		if ( i == at[sp] )
		{	
			sp++;
			vec.push_back(proc);
			proc++;
		}
		m = minimum();
		bt[m]=bt[m]-1;
		if(bt[m]==0)
		{
			ft[m]=i+1;
		}
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
			 << "\t" << fbt[i] << "\t" << wt[i] << "\t" << tat[i];
		avwt += wt[i];
		avtat += tat[i];
	}
}
void process ::average()
{
	avwt /= n;
	avtat /= n;
	cout << "\n\nAverage Waiting Time:" << avwt;
	cout << "\nAverage Turnaround Time:" << avtat;
}

int main()
{
	process p1;
	p1.enter();
	p1.run();
	p1.turnaroundtime();
	p1.waitingtime();
	p1.display();
	p1.average();
	return 0;
}
