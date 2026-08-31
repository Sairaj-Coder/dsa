#include<bits/stdc++.h>
using namespace std;
//basically graph is for zero based i.e starting from zero;
vector<int>bfsOfgraph(int v,vector<int>adj[]){
    //int v is size of total node/vertex's
    int vis[v+1]={0};
    vis[1]=1;//here we mark first element
    queue<int>q;
    q.push(1);//here we put first element inside which 1 because this is not zero based index
    vector<int>bfs;
    while (!q.empty())
    {
        int node=q.front();
        q.pop();
        bfs.push_back(node);
        for (auto it: adj[node])
        {
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }
        

    }
    return bfs;

}


int main(){
    int n,m;
    cout<<"enter node and egdes:"<<endl;
    cin>>n>>m;
    vector<int>adj[n+1];
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    auto order =bfsOfgraph(n,adj);
    for (auto i : order)
    {
        cout<<i<<",";
    }
    
    
    
    
    
    return 0;
}