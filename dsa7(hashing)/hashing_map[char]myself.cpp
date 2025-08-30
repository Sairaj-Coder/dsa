#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size:"<<endl;
    cin>>n;
    string arra[n];
    for (auto i = 0; i < n; i++)
    {
        cout<<"enter name "<<i+1<<endl;
        cin>>arra[i];
    }
    //here we declare this mpp above and add this mpp[arra[i]]+=1 in above as this does not impact on time complexcity as it is n+n
    unordered_map<string,int>mpp;// as it does not have maximum capacity of 10^7 so hash array was replace by map
    for (auto i = 0; i < n; i++)
    {
        mpp[arra[i]]+=1;
    }
    for (auto i:mpp)
    {
        cout<<i.first<<"-->"<<i.second<<endl;
    }
    
    
    return 0;
}