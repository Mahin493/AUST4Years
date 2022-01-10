#include<bits/stdc++.h>
using namespace std;


int main()
{
   int Block_no, blockSize[60];

    cout<<"Number of blocks: ";
    cin>>Block_no;
    cout<<"Blocks are: ";
    for(int i = 0; i < Block_no; i++)
    {

        cin>>blockSize[i];
    }
    int requests[60],Memory_R;
    cout<<"Number of Memory Request: ";
    cin>>Memory_R;
    cout<<" Memory Requests: ";
    for(int i = 0; i < Memory_R; i++)
    {

        cin>>requests[i];
    }


    int allocation[Memory_R];
    for(int  i= 0; i < Memory_R; i++)
    {
        allocation[i]=-1;
    }

    for (int i=0; i<Memory_R; i++)
    {
        int bestIdx = -1;
        for (int j=0; j<Block_no; j++)
        {
            if (blockSize[j] >= requests[i])
            {
                if (bestIdx == -1)
                    bestIdx = j;
                else if (blockSize[bestIdx] > blockSize[j])
                    bestIdx = j;
            }
        }

        if (bestIdx != -1)
        {
            allocation[i] = bestIdx;
            blockSize[bestIdx] -= requests[i];
        }

        cout<<requests[i]<<":: ";
        if(allocation[i]!=-1)
        {
            for(int k=0; k<Block_no; k++)
            {
                cout<<blockSize[k]<<"  ";
            }

        }
        else
        {
            int total =0;
             for(int k=0; k<Block_no; k++)
            {
                total+=blockSize[k];
            }
            cout << "No External Fragmentation:"<<total;


        }
        cout<<"\n";
    }


    return 0 ;
}
