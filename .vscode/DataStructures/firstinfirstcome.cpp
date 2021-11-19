#include<iostream>
#include <bits/stdc++.h>
using namespace std;
# define MAX 100
class Process
{   
    public:
    int Total_process;
    int AT[MAX];
    int TT[MAX];
    int BT[MAX];
    int FT[MAX];
    int WT[MAX];
    void Ganttchart();
    void Table();
    int minarrivaltime();
};

int Process :: minarrivaltime()
{
    int min = *min_element(AT, AT+Total_process);
    int index;
    for (int i=0;i<Total_process;i++)
    {
        if(min==AT[i])
        {
            index=i;
            AT[i]=100;
            return index;
        }
    }
}
void Process :: Ganttchart()
{
    cout << "----------Gantt Chart--------"<<endl;
    FT[0]=BT[minarrivaltime()];
    for (int i=1;i<Total_process;i++)
    {
       FT[i]=FT[i-1]+BT[minarrivaltime()];  
    }
    for(int i =0;i<Total_process;i++)
    {
        cout<<FT[i]<<"  ";
    }
//    for(int i=0;i<Total_process;i++)
}
void Process :: Table()
{
    cout<<"*---------------Table-----------*"<<endl;
    cout<<"|  PID  |  AT  |  BT  |  TT  |  TT  |"<<endl;
    for (int i=0;i<Total_process;i++)
    {
        cout<<"|  "<<i+1<<"  |  "<<AT[i]<<"  |  "<<BT[i]<<"  |  "  ;    
    }
}
int main()
{   
    Process p1;
    cout<<"How many processes are there? "<<endl;
    cin>>p1.Total_process;
    cout<<"Enter Burst time for each process "<<endl;
    for (int i =0;i<p1.Total_process;i++)
    {
        cout<<"P["<<i+1<<"] : ";
        cin>>p1.BT[i];
    }
    for (int i =0;i<p1.Total_process;i++)
    {
        cout<<p1.BT[i]<<" ";
    }

    cout<<"Enter Arrival Time for each Processes "<<endl;
    for (int i =0;i<p1.Total_process;i++)
    {
        cout<<"AT["<<i+1<<"] : ";
        cin>>p1.AT[i];
    }

    cout<<"This is preemptive scheduling" <<endl;
    cout<<"Creating Gantt Chart :"<<endl;
    p1.Ganttchart();
  
}
