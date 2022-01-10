#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

struct process {
    int process_id;
    int arrival_time;
    int burst_time;
    int priority;
    int start_time;

    int turnaround_time;
    int waiting_time;
    int completion_time;
};

int main() {

    int process_no;
    float avg_waiting_time;
    float avg_turnaround_time;

    struct process p[40];
    int total_turnaround_time = 0;
    int total_waiting_time = 0;

    int is_completed[40];
    memset(is_completed,0,sizeof(is_completed));

    cout << setprecision(2) << fixed;

    cout<<"Total number of processes: ";
    cin>>process_no;

    for(int i = 0; i < process_no; i++) {
        cout<< "Arrival time of process : "<<i+1<<": ";
        cin>>p[i].arrival_time;
        cout<<" Burst time of process : "<<i+1<<": ";
        cin>>p[i].burst_time;
        cout<<" Priority of the process : "<<i+1<<": ";
        cin>>p[i].priority;
        p[i].process_id = i+1;
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
            p[p_indx].start_time = current_time;
            p[p_indx].completion_time = p[p_indx].start_time + p[p_indx].burst_time;
            p[p_indx].turnaround_time = p[p_indx].completion_time - p[p_indx].arrival_time;
            p[p_indx].waiting_time = p[p_indx].turnaround_time - p[p_indx].burst_time;

            total_turnaround_time += p[p_indx].turnaround_time;
            total_waiting_time += p[p_indx].waiting_time;

            is_completed[p_indx] = 1;
            completed++;
            current_time = p[p_indx].completion_time;

        }
        else {
            current_time++;
        }

    }



    avg_turnaround_time = (float) total_turnaround_time / process_no;
    avg_waiting_time = (float) total_waiting_time / process_no;


    cout<<endl<<endl;


    cout<<"Pid\t"<<"Ar_T\t"<<"Bur_T\t"<<"Prio\t"<<"Com_T\t"<<"TAT\t"<<"WT\t"<<"\n"<<endl;

    for(int i = 0; i < process_no; i++) {


        cout<<p[i].process_id<<"\t"<<p[i].arrival_time<<"\t"<<p[i].burst_time<<"\t"<<p[i].priority<<"\t"<<p[i].completion_time<<"\t"<<p[i].turnaround_time<<"\t"<<p[i].waiting_time<<"\t"<<"\n"<<endl;
    }
    cout<<"Average Turnaround Time = "<<avg_turnaround_time<<endl;
    cout<<"Average Waiting Time = "<<avg_waiting_time<<endl;



}
