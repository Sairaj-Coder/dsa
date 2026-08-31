#include<bits/stdc++.h>
using namespace std;
vector<int> bfs(vector<int> vec[],int n){
    int visted[n+1]={0};
    visted[1]=1;
    queue<int>q;
    q.push(1);
    vector<int>bfs;
    while (!q.empty())
    {
        int node=q.front();
        q.pop();
        bfs.push_back(node);
        for (auto it:vec[node] )
        {
            if(!visted[it]){
                q.push(it);
                visted[it]=1;

            }
        }
        

    }
    return bfs;
    
}
int main(){
    int vertex, edges;
    cout<<"Enter vertexes and edges"<<endl;
    cin>>vertex>>edges;
    vector<int>vec[vertex+1];
    
    
    for (int i = 0; i < edges; i++)
    {
        int u,v;
        cin>>u>>v;
        vec[u].push_back(v);
        vec[v].push_back(u);

    }
    auto order=bfs(vec,vertex);
    for (auto it:order )
    {
        cout<<it<<",";
    }
    
    
    return 0;
}