#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"begin"<<endl;
    int n,m;
    cin>>n>>m;
    vector<int>arr_list[n+1];//in case of vector if size is delared then default value is 0
    for (int i = 0; i < m; i++)
    {   
        int u,v;
        cin>>u>>v;
        arr_list[u].push_back(v);//arr_list[u].push_back(v); for vector
        //in directed graph we only have to comment one line 13
        arr_list[v].push_back(u);
    }
    /*
    for (int i = 0; i < (n+1); i++)
    {    cout<<i<<"=";
        for (int j = 0; j < arr_list[i].size(); j++)
        {
            cout<<arr_list[i][j]<<",";
        }
        cout<<endl;
        
    }
    */
    
    
    
    return 0;
}