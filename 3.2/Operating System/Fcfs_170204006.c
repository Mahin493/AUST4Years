#include<stdio.h>

int main()
{
    int arrival[60],waiting[60],turnaround[60];
    double average_wt,average_tt;
    printf("Please enter the number of process: ");

    int process_no;
    scanf("%d",&process_no);
    printf("Please enter the CPU times: ");

    int cpu[60];

    int i;
    for(i=0;i<process_no;i++)
    {
        scanf("%d",&cpu[i]);

    }
    printf("Please enter the Arrival times: ");

    for(i=0;i<process_no;i++)
    {
        scanf("%d",&arrival[i]);

    }
    for(i=0;i<process_no;i++){
        if(i==0)
        {
            waiting[0]=0;
        }
        else{
                waiting[i]=(cpu[i-1]+waiting[i-1])-arrival[i];

        }
        turnaround[i]=waiting[i]+cpu[i];
        printf("Process %d: Waiting Time is :%d Turnaround Time is :%d\n",i+1,waiting[i],turnaround[i]);
    }
    average_wt=0;
    average_tt=0;
    for(i=0;i<process_no;i++)
    {
        average_wt=average_wt+waiting[i];
        average_tt=average_tt+turnaround[i];
    }
    printf("Average waiting time is:%lf\n",average_wt/process_no);
    printf("Average turnaround time is:%lf\n",average_tt/process_no);
}
