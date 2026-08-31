#include<bits/stdc++.h>
using namespace std;
void dfs2(int node,vector<int>adj[],int vis[],vector<int>&ls){
    vis[node]=1;
    ls.push_back(node);
    //traverse all its neighbors
    for(auto it: adj[node]){
        if(!vis[it]){
            dfs2(it,adj,vis,ls);
        }
    }
}
vector<int>dfs(int v,vector<int>adj[]){
    int vis[v+1]={0};
    int start=1;
    vector<int>ls;
    dfs2(start,adj,vis,ls);
    return ls;

}
int main(){
    int vertex,edges;
    cout<<"Enter vertex and edges"<<endl;
    cin>>vertex>>edges;
    vector<int>arr[vertex+1];
    for (auto i = 0; i < edges; i++)
    {
        int u,v;
        cin>>u>>v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }
    auto order=dfs(vertex,arr);
    for(auto it : order){
        cout<<it<<",";
    }

    
    
    return 0;
}