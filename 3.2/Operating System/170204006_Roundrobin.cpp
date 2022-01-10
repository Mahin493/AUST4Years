#include<iostream>
using namespace std;

int main(){

 int process_no,temp,exe_t=0,pros[50],count=0,quan_t,arrival_t[50],burst_t[50],rmburst_t[50],tat[50],wt[50];

 double average_tat=0,average_wt=0;

 cout<<"Total number of process:";
 cin>>process_no;

 int i,j;
 cout<<"Process Sequence:";
 for(i=0;i<process_no;i++){
   cin>>pros[i];
 }

 cout<<"Arrival Times::";
 for(i=0;i<process_no;i++){
   cin>>arrival_t[i];
 }

 cout<<"Burst Times::";
 for(i=0;i<process_no;i++){
   cin>>burst_t[i];
   rmburst_t[i]=burst_t[i];
 }
 cout<<"Quantum Time:";
 cin>>quan_t;

 for(i=0;i<process_no;i++){

   for(j=i+1;j<process_no;j++){
      if(arrival_t[i]>arrival_t[j]){
         temp=burst_t[i];
         burst_t[i]=burst_t[j];
         burst_t[j]=temp;

         temp=rmburst_t[i];
         rmburst_t[i]=burst_t[j];
         rmburst_t[j]=temp;

         temp=pros[i];
         pros[i]=arrival_t[j];
         pros[j]=temp;

         temp=arrival_t[i];
         arrival_t[i]=arrival_t[j];
         arrival_t[j]=temp;



      }
   }
 }

 while(true){

   for(i=0,count=0;i<process_no;i++){
      temp=quan_t;

      if(rmburst_t[i]==0){
         count++;
         continue;
      }
      if(rmburst_t[i]>quan_t){
         rmburst_t[i]=rmburst_t[i]-quan_t;
      }

      else if(rmburst_t[i]>=0){
         temp=rmburst_t[i];
         rmburst_t[i]=0;
      }

      exe_t+=temp;

      tat[i]=exe_t-arrival_t[i];

   }

   if(process_no==count)
      break;

 }

   cout<<"\nProcess\t \tArrival Time\t \t Burst Time\t\t \tWaiting Time \tTurnAround Time\n";

   for(i=0;i<process_no;i++){

         average_tat+=tat[i];
         wt[i]=tat[i]-burst_t[i];
         average_wt+=wt[i];

         cout<<pros[i]<<"\t\t\t"<<arrival_t[i]<<"\t\t\t"<<burst_t[i]<<"\t\t\t"<<wt[i]<<"\t\t\t"<<tat[i]<<endl;


   }

    average_tat=average_tat/process_no;
    average_wt=average_wt/process_no;

    cout<<"Average Waiting Time is: "<<average_wt<<endl;
    cout<<"Average Turn Around Time is:"<<average_tat<<endl;




}
