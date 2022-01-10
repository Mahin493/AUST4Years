#include <bits/stdc++.h>
using namespace std;
int main() {

    int i, j, exec, resource, process;
    int count = 0;
    bool safe = false;

    cout<<"\nEnter the number of processes: ";
    cin>>process;

    cout<<"\nEnter the number of resources: ";
    cin>>resource;
    int sz = max(process,resource);

    vector<int> available(sz);
    vector<vector <int> > maxallocation(sz);
    vector<int> total(sz);
    vector<vector <int> > allocated(sz);
    vector <int> allocation(sz);
    vector<int> running (sz,1);
    count = process;


    for (i = 0; i < process; i++) {
        cout<<"\n\n\nProcess " <<i+1<<endl<<endl;
        allocated[i].resize(sz);
        maxallocation[i].resize(sz);

        for (j = 0; j < resource; j++){

          cout<<"\nMaximum value for resource " <<j+1 <<" : ";
         cin>>maxallocation[i][j];
        }

        for (j = 0; j < resource; j++){
              cout<<"\nAllocated from resource " <<j+1 <<" : ";
            cin>>allocated[i][j];
        }

    }

    cout<<endl<<endl;
    for (i = 0; i < resource; i++){
        cout<<"\nEnter total value of resources " <<i+1 << " : ";
        cin>>total[i];
    }


    for (i = 0; i < process; i++)
     for (j = 0; j < resource; j++)
         allocation[j] += allocated[i][j];

    for (i = 0; i < resource; i++)
     available[i] = total[i] - allocation[i];


    cout<<"\n\n\n< ";
    while (count != 0) {
        safe = false;
        for (i = 0; i < process; i++) {
            if (running[i]) {
                exec = 1;
                for (j = 0; j < resource; j++) {
                    if (maxallocation[i][j] - allocated[i][j] > available[j]) {
                        exec = 0;
                        break;
                    }
                }

                if (exec) {
                    cout<<"P"<<  (i + 1)<< " ";
                    running[i] = 0;
                    count--;
                    safe = true;
                    for (j = 0; j < resource; j++)
                        available[j] += allocated[i][j];
                    break;
                }
            }
        }
    }

    cout<<"> is the safe sequence"<<endl;

     if (!safe) {
            cout<<"\n\n\nThe System is in unsafe state.\n\n";

        }

        if (safe)
            cout<<"\n\n\nThe System is currently in safe state.\n\n";

    return 0;
}
