#include<bits/stdc++.h>
using namespace std;
int blockSize[100],memReq[100],m,n;

int main()
{
   cout<<"Enter number of Memory Request: ";
    cin>>m;
    cout<<"enter Memory Request: ";
    for(int i = 0; i < m; i++)
    {

        cin>>memReq[i];
    }
    cout<<"Enter number of blocks: ";
    cin>>n;
    cout<<"enter block: ";
    for(int i = 0; i < n; i++)
    {

        cin>>blockSize[i];
    }

    int allocation[m];
    for(int  i= 0; i < m; i++)
    {
        allocation[i]=-1;
    }

    for (int i=0; i<m; i++)
    {
        int bestIdx = -1;
        for (int j=0; j<n; j++)
        {
            if (blockSize[j] >= memReq[i])
            {
                if (bestIdx == -1)    //70 100> 60
                    bestIdx = j;
                else if (blockSize[bestIdx] < blockSize[j])
                    bestIdx = j;
            }
        }

        if (bestIdx != -1)
        {
            allocation[i] = bestIdx;
            blockSize[bestIdx] -= memReq[i];
        }

        cout<<memReq[i]<<">>  ";
        if(allocation[i]!=-1)
        {
            for(int k=0; k<n; k++)
            {
                cout<<blockSize[k]<<"  ";
            }
        }

        else
        {
            cout << "NO External Fragmentation:"<<endl;
            int sum =0;
             for(int k=0; k<n; k++)
            {

                sum+=blockSize[k];
            }
            if(sum!=0){
                cout << "Not Allocated  External Fragmentation:"<<sum;
            }
           else{

                cout << "NO External Fragmentation:"<<endl;

           }


        }
        cout<<"\n";
    }


    return 0 ;
}
