#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

struct process {
    int pid;
    int completion_time;
    int turnaround_time;
    int arrival_time;
    int start_time;
    int waiting_time;
    int burst_time;
    int priority;

};

int main() {

    int process_no;
    struct process p[40];
    float average_tat;
    float average_wt;

    int total_turnaround_time = 0;
    int total_waiting_time = 0;


    int burst_remaining[400];
    int is_completed[400];
    memset(is_completed,0,sizeof(is_completed));

    cout << setprecision(3) << fixed;

    cout<<"Total number of processes: ";
    cin>>process_no;

    for(int i = 0; i < process_no; i++) {
        cout<<" Arrival time of process: "<<i+1<<": ";
        cin>>p[i].arrival_time;
        cout<<" Burst time of process: "<<i+1<<": ";
        cin>>p[i].burst_time;
        cout<<" Priority of the process: "<<i+1<<": ";
        cin>>p[i].priority;
        p[i].pid = i+1;
        burst_remaining[i] = p[i].burst_time;
        cout<<endl;
    }

    int current_time = 0;
    int completed = 0;

    while(completed != process_no) {
        int p_indx = -1;
        int min = 9999;
        for(int i = 0; i < process_no; i++) {
            if(p[i].arrival_time <= current_time && is_completed[i] == 0) {
                if(p[i].priority < min) {
                    min = p[i].priority;
                    p_indx = i;
                }
                if(p[i].priority == min) {
                    if(p[i].arrival_time < p[p_indx].arrival_time) {
                        min = p[i].priority;
                        p_indx = i;
                    }
                }
            }
        }

        if(p_indx != -1) {
            if(burst_remaining[p_indx] == p[p_indx].burst_time) {
                p[p_indx].start_time = current_time;

            }
            burst_remaining[p_indx] -= 1;
            current_time++;

            if(burst_remaining[p_indx] == 0) {
                p[p_indx].completion_time = current_time;
                p[p_indx].turnaround_time = p[p_indx].completion_time - p[p_indx].arrival_time;
                p[p_indx].waiting_time = p[p_indx].turnaround_time - p[p_indx].burst_time;

                total_turnaround_time += p[p_indx].turnaround_time;
                total_waiting_time += p[p_indx].waiting_time;
                is_completed[p_indx] = 1;
                completed++;
            }
        }
        else {
             current_time++;
        }
    }


    average_tat = (float) total_turnaround_time / process_no;
    average_wt = (float) total_waiting_time / process_no;
    cout<<endl<<endl;

    cout<<"Pid\t"<<"Ar_T\t"<<"Bur_T\t"<<"Prio\t"<<"Com_T\t"<<"TAT\t"<<"WT\t"<<"\n"<<endl;

    for(int i = 0; i < process_no; i++) {

        cout<<p[i].pid<<"\t"<<p[i].arrival_time<<"\t"<<p[i].burst_time<<"\t"<<p[i].priority<<"\t"<<p[i].completion_time<<"\t"<<p[i].turnaround_time<<"\t"<<p[i].waiting_time<<"\t"<<"\n"<<endl;
    }

    cout<<"Average Waiting Time = "<<average_wt<<endl;
    cout<<"Average Turnaround Time = "<<average_tat<<endl;




}

