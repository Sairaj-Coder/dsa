#include<bits/stdc++.h>
//hw remaining
using namespace std;
int main(){
    pair<int,int>arra[5];
    for (auto i = 0; i < 5; i++)
    {
        cout<<"enter"<<i+1<<endl;
        cin>>arra[i].first>>arra[i].second;
    }
    for (auto j :arra)
    {
        cout<<j.first<<","<<j.second<<",";
    }
    cout<<endl;
    
    
    /*
    map<string,int>mpp={
        {"sai",5},
        {"sairaj",6}
    };
    auto it=mpp.find("sai");
    cout<<it->first<<endl;
    cout<<mpp.size()<<endl;
    */
    return 0;
}