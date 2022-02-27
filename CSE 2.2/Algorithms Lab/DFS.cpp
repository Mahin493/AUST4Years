#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void edge(vector<int>adj[],int u,int v){
adj[u].push_back(v);
}
void dfs(int s,vector<int>adj[],bool visit[]){

stack<int>stk;
stk.push(s);
visit[s]=true;
while(!stk.empty()){
int u=stk.top();
cout<<u<<" ";
stk.pop();
for(int i=0;i<adj[u].size();i++){
if(!visit[adj[u][i]]){
stk.push(adj[u][i]);
visit[adj[u][i]]=true;
   }
    }
  }
}
int main(){
vector<int>adj[5];
bool visit[5];
for(int i=0;i<5;i++){
visit[i]=false;
}
edge(adj,0,2);
edge(adj,0,1);
edge(adj,1,3);
edge(adj,2,0);
edge(adj,2,3);
edge(adj,2,4);
cout<<"DFS traversal is"<<" ";
dfs(0,adj,visit);
}
