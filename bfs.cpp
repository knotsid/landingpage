#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
//this is the program for bfs traversal;(which is also called as level order traversal;
///we will need an adjacency list and number of nodes to find  the bfs order;
vector<int> bfsofgraph(int N,vector<int>V[]){
    vector<int>vis(N+1,0);
    vector<int>bfs;

    for(int i=1;i<=N;i++){
      if(vis[i]==0){
            queue<int>q;
           q.push(i);
           vis[i]=1;
           while(!q.empty())
           {
               int node=q.front();
               q.pop();
               bfs.push_back(node);
               for(auto it:V[node])
               {
                  if(vis[it]==0) {
                    q.push(it);
                    vis[it]=1;
                  }
                }
           }
    }
}

return bfs;
}

void printvector(vector<int>Arr){
  for(int i=0;i<Arr.size();i++)
  {
    cout<<Arr[i]<<" ";
  }
    cout<<endl;
}
int main(){
    int n,m;
cin>>n>>m;
vector<int>V[n+1];
for(int i=0;i<m;i++)
{
    int u,v;
    cin>>u>>v;
    V[u].push_back(v);
    V[v].push_back(u);

}
 for(int i=1;i<=n;i++)
 {
     cout<<i<<"->";
     printvector(V[i]);
 }

 vector<int>ans;
      ans=bfsofgraph(n,V);

  printvector(ans);



   return 0;
}
