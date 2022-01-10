#include<iostream>
using namespace std;

int main(){
 int process_no,tt=0,min,i,j,m,temp;

 double average_tat=0,average_wt=0,total_tat=0,total_wt=0;

 cout<<" Please Enter the number of process:";
 cin>>process_no;

 int process[process_no],burst[process_no],arrival[process_no],tat[process_no],c[process_no],wt[process_no];

 cout<<"Please enter the sequence of your process: ";

 for(i=0;i<process_no;i++){
   cin>> process[i];
 }

 cout<<"Please enter Arrival Times: ";

 for(i=0;i<process_no;i++){
   cin>> arrival[i];
 }

 cout<<"Please enter Burst Times: ";

 for(i=0;i<process_no;i++){
   cin>> burst[i];
 }

 for(i=0;i<process_no;i++){
   for(j=i+1;j<process_no;j++){
      if(burst[i]>burst[j]){

         temp=process[i];
         process[i]=process[j];
         process[j]=temp;

         temp=arrival[i];
         arrival[i]=arrival[j];
         arrival[j]=temp;

         temp=burst[i];
         burst[i]=burst[j];
         burst[j]=temp;


      }
   }
 }

 min=arrival[0];
 for(i=0;i<process_no;i++){
      if(min>arrival[i])
      {
         min=arrival[i];
         m=i;


      }

 }

 tt=min;
 c[m]=tt+burst[m];
 tt=c[m];

 for(i=0;i<process_no;i++){
   if(arrival[i]!=min){
      c[i]=burst[i]+tt;
      tt=c[i];

    }
 }
  cout<<"Process\t\tArrival Time\t\t Burst Time\t\t \tWaiting Time \tTurnAround Time\n";
  for(i=0;i<process_no;i++){

      tat[i]=c[i]-arrival[i];
      total_tat=total_tat+tat[i];
      wt[i]=tat[i]-burst[i];
      total_wt=total_wt+wt[i];

      cout<<process[i]<<"\t\t\t"<<arrival[i]<<"\t\t\t"<<burst[i]<<"\t\t\t"<<wt[i]<<"\t\t\t"<<tat[i]<<endl;


   }

    average_tat=total_tat/process_no;
    average_wt=total_wt/process_no;

    cout<<"Average Waiting Time is: "<<average_wt<<endl;
    cout<<"Average Turn Around Time is:"<<average_tat<<endl;






 }
