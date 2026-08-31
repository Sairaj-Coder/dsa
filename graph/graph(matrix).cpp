#include<bits/stdc++.h>
using namespace std;
int main(){
    //bascially taking graph as input
    int n,m;
    cout<<"Enter node and edges"<<endl;
    cin>>n>>m;
    int adj[n+1][m+1]={0};
    for (int i = 0; i < m; i++)//basically loop is running for m time or edges because we want to put all egdes
    {   
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;//intersection point //for weight it is not equal to 1 it is equal to weight
        adj[v][u]=1;//intersection point same for reverse
    }
  
  
    
    
    
   
    
    return 0;
}