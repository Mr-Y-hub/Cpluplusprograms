#include<iostream>
using namespace std;
 
int main()
{
      int burst_time[20], process[20], waiting_time[20], turnaround_time[20], priority[20];
      int i, j, limit, sum = 0, position, temp;
      float average_wait_time, average_turnaround_time;
      cout<<"Enter Total Number of Processes: "<<endl;
      cin>>limit;
      cout<<"\nEnter Burst Time and Priority For Processes\n"<<limit;
      for(i = 0; i < limit; i++)
      {
            cout<<"\nProcess"<<" "<<i + 1<<endl;
            cout<<"Process Burst Time:"<<endl;
            cin>>burst_time[i];
            cout<<"Process Priority:"<<endl;
            cin>>priority[i];
            process[i] = i + 1;
      }
      for(i = 0; i < limit; i++)
      {
            position = i;
            for(j = i + 1; j < limit; j++)
            {
                  if(priority[j] < priority[position])
                  {
                        position = j;
                  }
            }
            temp = priority[i];
            priority[i] = priority[position];
            priority[position] = temp; 
            temp = burst_time[i];
            burst_time[i] = burst_time[position];
            burst_time[position] = temp;
            temp = process[i];
            process[i] = process[position];
            process[position] = temp;
      }
      waiting_time[0] = 0;
      for(i = 1; i < limit; i++)
      {
            waiting_time[i] = 0;
            for(j = 0; j < i; j++)
            {
                  waiting_time[i] = waiting_time[i] + burst_time[j];
            }
            sum = sum + waiting_time[i];
      }
      average_wait_time = sum / limit;
      sum = 0;
      cout<<"\nProcess ID\t\tBurst Time\t Waiting Time\t Turnaround Time\n";
      for(i = 0; i < limit; i++)
      {
            turnaround_time[i] = burst_time[i] + waiting_time[i];
            sum = sum + turnaround_time[i];
            cout<<"\nProcess"<<" "<<process[i]<<"\t\t"<<burst_time[i]<<"\t\t"<<waiting_time[i]<<"\t\t"<<turnaround_time[i]<<endl;
      }
      average_turnaround_time = sum / limit;
      cout<<"\nAverage Waiting Time"<<" "<<average_wait_time;
      cout<<"\nAverage Turnaround Time:"<<" "<<average_turnaround_time;
      return 0;
}         
