#include<bits/stdc++.h>
using namespace std;
const int max_Node =  9999;
vector<int> v[max_Node];
int color[max_Node],par[max_Node];

int Count=1;
bool cycle = 0;
string str[max_Node],edge1,edge2;

void print_path(int cur,int target)
{
    if(cur==target)
    {
        cout<<str[cur]<<" ";
        return;
    }
    print_path(par[cur],target);
    cout<<str[cur]<<" ";
}
void dfs(int node)
{
    color[node]  = 1;
    for(int i=0;i<v[node].size();i++)
    {
        if(color[v[node][i]]==0)
        {
            par[v[node][i]]  =node;
            dfs(v[node][i]);
        }
        else if(color[v[node][i]]==1)
        {

            cycle = 1;
            cout<<"Deadlock ";
            cout<<Count++;
            cout<<" Detected "<<endl;
            cout<<"Deadlock occurred among nodes:";
            print_path(node,v[node][i]);
            cout<<endl;
        }
    }
    color[node]  = 2;
}
int main()
{
    int nodes,total_edge;

    cout<<" Number of nodes : ";
    cin>>nodes;
    cout<<"Name of the nodes : ";
    map<string,int> compress;
    for(int i=1;i<=nodes;i++)
    {
        cin>>str[i];
        compress[str[i]]  = i;
    }
    cout<<"Enter number of edges : ";
    cin>>total_edge;
    cout<<"Edges :"<<endl;
    while(total_edge--)
    {
        cin>>edge1>>edge2;
        v[compress[edge1]].push_back(compress[edge2]);
    }
    for(int i=1;i<=nodes;i++)
    {
        if(color[i]==0)
        {
            par[i]  = i;
            dfs(i);
        }
    }
    if(!cycle)
    {
        cout<<"No DeadLock Found"<<endl;
    }
    return 0;
}

