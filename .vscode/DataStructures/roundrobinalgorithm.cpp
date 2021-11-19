#include <queue>
#include <iostream>
using namespace std;
class process
{
public:
	int n, bt[20], wt[20], tat[20], at[20], avwt = 0, avtat = 0, quant, ft[20], fbt[20];
	int t = 0, temp[20]; // store processes which are in queue
	int et[20], e = 1;
	queue<int> gquiz;
	void enter();
	void waitingtime();
	void turnaroundtime();
	void display();
	void average();
	void grantchart();
	void queuealgo();
	void show();
	void finishtime();
};

void process::show()
{
	for (int i = 0; i < t; i++)
	{
		cout << temp[i] << " ";
	}
}
void process ::queuealgo()
{
	for (int i = 0; i < n; i++)
	{
		gquiz.push(i);
	}
	et[0] = 0;
}
void process ::enter()
{
	cout << "Enter total number of processes(maximum 20):";
	cin >> n;
	cout << "\nEnter Process Burst Time\n";
	for (int i = 0; i < n; i++)
	{
		cout << "P[" << i + 1 << "]:";
		cin >> bt[i];
		fbt[i] = bt[i];
	}
	cout << "Enter Quantum Number : ";
	cin >> quant;
	cout << endl;
}

void process ::waitingtime()
{
	for (int i = 0; i < n; i++)
	{
		wt[i] = tat[i] - fbt[i];
	}
}
void process ::finishtime()
{
	// finish time
	while (!gquiz.empty())
	{
		temp[t] = gquiz.front();
		gquiz.pop();
		if (bt[temp[t]] <= quant)
		{
			et[e] = et[e - 1] + bt[temp[t]];
			bt[temp[t]] = 0;
			if (bt[temp[t]] == 0)
			{
				ft[temp[t]] = et[e];
			}
		}
		else
		{
			et[e] = et[e - 1] + quant;
			bt[temp[t]] = bt[temp[t]] - quant;
			gquiz.push(temp[t]);
		}
		t++;
		e++;
	}
}
void process ::turnaroundtime()
{
	for (int i = 0; i < n; i++)
	{
		tat[i] = ft[i];
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
void process ::grantchart()
{
	//Upper Row
	for (int i = 1; i <= t; i++)
	{
		cout << "*";
		for (int j = 0; j < 2 * (et[i] - et[i - 1]); j++)
		{
			cout << "-";
		}
	}
	cout << "*";
	//  //Middle row
	cout << endl;
	for (int i = 1; i <= t; i++)
	{
		cout << "|";
		for (int j = 0; j < (et[i] - et[i - 1] - 1); j++)
		{
			cout << " ";
		}
		cout << "P" << temp[i - 1];
		for (int j = 0; j < (et[i] - et[i - 1] - 1); j++)
		{
			cout << " ";
		}
	}
	cout << "|" << endl;
	//Middle Row
	for (int i = 1; i <= t; i++)
	{
		cout << "*";
		for (int j = 0; j < 2 * (et[i] - et[i - 1]); j++)
		{
			cout << "-";
		}
	}
	cout << "*" << endl;

	//Last row
	cout << et[0];
	for (int c = 1; c <= t; c++)
	{
		for (int j = 0; j < 2 * (et[c] - et[c - 1]); j++)
		{
			cout << " ";
		}
		cout << et[c];
	}
}

int main()
{
	process p1;
	int i;
	p1.enter();
	p1.queuealgo();
	p1.finishtime();
	p1.turnaroundtime();
	p1.waitingtime();
	//p1.show();
	cout << endl;
	cout << "-----------GRANTT CHART------" << endl;
	p1.grantchart();
	cout << endl;
	cout << "------------TABLE----------" << endl;
	p1.display();
	p1.average();
	return 0;
}
