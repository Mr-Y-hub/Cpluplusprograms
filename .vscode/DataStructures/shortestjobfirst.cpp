#include <bits/stdc++.h>
#include <queue>
#include <iostream>
#include <vector>
using namespace std;
class process
{
public:
	int n;
    int wt[100], tat[100], avwt = 0, avtat = 0, fbt[100];
    vector <int> bt;
    vector <int> vec;
	void enter();
	void waitingtime();
	void run();
	void display();
	void average();	
	int Process_calculation();
	void turnaroundtime();

};
int process:: Process_calculation()
{
    for(int i =0 ; i < n ; i++ )
    {
        for ( int j =0 ; j<n ; j++)
        {
            if(bt[i]==fbt[j])
            {
                vec.push_back(j);
            }
        }
    }
}

void process ::enter()
{ 
	cout << "Enter total number of processes(maximum 20):";
	cin >> n;
    int temp;
	cout << "\nEnter Process Burst Time\n";
	for (int i = 0; i < n; i++)
	{
		cout << "P[" << i + 1 << "]:";
		cin >> temp;
        bt.push_back(temp);
		fbt[i] = bt[i];
	}
}

void process ::waitingtime()
{
	for ( int i = 0 ; i < n ; i++ )
	{
		wt[i]=tat[i]-bt[i];
	}

}
void process ::turnaroundtime()
{
	 for ( int i = 0 ; i < n ; i++ )
	 {
	 	cout<<tat[i]<<" ";
	 }
}
void process ::run()
{	
    sort(bt.begin(), bt.end());
	int flag=0,proc=0;
	int sp=0;
    cout<<endl;
	for ( int i = 0 ; i < bt.size(); i++)
	{
		sp+=bt[i];
        tat[i]=sp;
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
		cout << "\nP[" << vec[i] + 1 << "]"
			 << "\t" << bt[i] << "\t" << wt[i] << "\t" << tat[i];
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
    cout<<"SHORTEST JOB FIRST SCHEDULING (Non-Preemptive) "<<endl;
    cout<<"We assume arrival time of all the processes are same;"<<endl;
	process p1;
	p1.enter();
	p1.run();
    p1.Process_calculation();
	p1.waitingtime();
	p1.display();
	p1.average();
	return 0;
}
