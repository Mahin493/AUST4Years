#include<bits/stdc++.h>
using namespace std;
int blockSize[100], memReq[100],m,n;

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


    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (blockSize[j] >= memReq[i])
            {
                allocation[i] = j;
                blockSize[j] -= memReq[i];
                break;
            }
        }
        cout<<memReq[i]<<"=>>  ";
        if(allocation[i]!=-1)
        {
            for(int k=0; k<n; k++)
            {
                cout<<blockSize[k]<<"  \t";
            }
        }
        else
        {
            int sum =0;
             for(int k=0; k<n; k++)
            {
                sum+=blockSize[k];
            }
            cout << "Not Allocated  External Fragmentation:"<<sum;


        }
        cout<<"\n";
    }

//m=10;100 10 35 15 23 6 25 55 88 40
//n=5 50 200 70 115 15
    return 0 ;
}

