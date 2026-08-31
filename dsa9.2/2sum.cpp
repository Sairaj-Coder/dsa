#include<bits/stdc++.h>
using namespace std;
void maprevision(){
    //searching if key not found
        map<int,string> mpp = {
        {1,"Sai"},
        {2,"Sam"},
        {3,"Rutik"}
    };
    // for (auto it :mpp)
    // {
    //     cout<<it.first<<","<<it.second<<",";
    // }
    auto it = mpp.find(4);
   if(  it != mpp.end()){
        cout<<it->second<<","<<endl;
   }
   else{
    cout<<"No";
   }

}
vector<int> optimalsol(int n,int arr[], int target){
     map<int,int> mpp;
    for (int i = 0; i < n; i++)
    {
        int more=target-arr[i];
        auto it = mpp.find(more);
        if(it != mpp.end()){
            // cout<<it->first<<"=="<<it->second<<endl;
            cout<<"Yes"<<endl;
            return {it->second,i};
        }
        mpp[arr[i]]=i;
        
    }
    return {0};

}
void betterthenoptimal(){
    
}
int main(){
    int n=4;
    int arr[n]={2,7,11,15};
    int target=9;
    auto mapp = optimalsol(n,arr, target);
   for (auto it:mapp) 
   {
    cout<<it<<endl;
   }
   
    // cout<<mapp[0]<<endl;

    return 0;
}