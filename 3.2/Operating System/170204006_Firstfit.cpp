#include<bits/stdc++.h>
using namespace std;


int main()
{
   int blockSize[60],Block_no;

    //m_request=10;100 10 35 15 23 6 25 55 88 40
    //block=5 ;50 200 70 115 15  ;


    cout<<"Enter number of blocks: ";
    cin>>Block_no;
    cout<<"Enter blocks: ";
    for(int i = 0; i < Block_no; i++)
    {

        cin>>blockSize[i];
    }
    int requests[60],Memory_R;
    cout<<"Enter number of Memory Request: ";
    cin>>Memory_R;
    cout<<"Enter Memory Request: ";
    for(int i = 0; i < Memory_R; i++)
    {

        cin>>requests[i];
    }


    int allocation[Memory_R];
    for(int  i= 0; i < Memory_R; i++)
    {
        allocation[i]=-1;
    }


    for (int i = 0; i < Memory_R; i++)
    {
        for (int j = 0; j < Block_no; j++)
        {
            if (blockSize[j] >= requests[i])
            {
                allocation[i] = j;
                blockSize[j] -= requests[i];
                break;
            }
        }
        cout<<requests[i]<<"::  ";
        if(allocation[i]!=-1)
        {
            for(int k=0; k<Block_no; k++)
            {
                cout<<blockSize[k]<<"  \t";
            }
        }
        else
        {
            int total =0;
             for(int k=0; k<Block_no; k++)
            {
               total+=blockSize[k];
            }
            cout << "External Fragmentation is :"<<total;


        }
        cout<<"\n";
    }


    return 0 ;
}

