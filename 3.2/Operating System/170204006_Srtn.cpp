#include<iostream>>
#include<stdio.h>
#define Max 1000
using namespace std;




struct process{
    int art;
    int cput;
    int wt;
    int tat;
    int pid;
    int ft;
    int x;


};

int main()

{
    int process_no, time_T=0 ,P_min,c=0;
    double average_tat=0,average_wt=0,endd;

    cout << "enter the number of process: ";
    cin >> process_no;

    struct process p[process_no+1];

    for(int i=0; i<process_no;i++)
    {
        p[i].pid = i+1;

    }


    cout<< "Enter the arrival times: ";
    for(int i=0 ; i<process_no;i++)
    {
        int b;
        cin >> b;
        p[i].art = b;
    }


    cout<< "Enter the CPU times: ";
    for(int i=0 ; i<process_no;i++)
    {
        int b;
        cin >> b;
        p[i].cput=b;
        p[i].x = p[i].cput;
    }

    p[process_no].cput = Max;

    for(time_T=0;c<process_no;time_T++)
    {

        P_min=process_no;
        for(int i=0;i<process_no;i++)
        {
            if(p[i].art<=time_T && p[i].cput<p[P_min].cput && p[i].cput>0 )
            P_min=i;
        }
        p[P_min].cput--;

        if(p[P_min].cput==0)
        {
            c++;
            endd=time_T+1;
            p[P_min].wt = endd - p[P_min].art - p[P_min].x ;
            p[P_min].tat = endd - p[P_min].art;
        }


    }


    printf("pro \t burst \t arrival \tTwaiting \tTurnaround ");
    for(int i=0;i<process_no;i++)
    {
        printf("\n %d \t   %d \t %d\t\t%d   \t\t%d",p[i].pid,p[i].x,p[i].art,p[i].wt,p[i].tat);
        average_wt = average_wt + p[i].wt;
        average_tat = average_tat + p[i].tat;
    }
    printf("\n\nAverage waiting time = %0.2lf\n",average_wt/process_no);
    printf("Average Turnaround time = %0.2lf",average_tat/process_no);


    return 0;
}
