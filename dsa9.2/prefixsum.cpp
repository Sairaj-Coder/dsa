#include<bits/stdc++.h>
using namespace std;
//prefix sum
void prefixsum(){
    int n=5;
    int arr[n]={2,4,1,3,5};
    //prefix sum
    map<int,int>mpp;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
        // mpp[arr[i]]=sum;
        mpp[i]=sum;
    }
    for(auto it : mpp){
        cout<<it.first<<"--"<<it.second<<"::";
    }
}

int main(){
    int n=5;
    int arr[n]={2,4,1,3,5};
    //prefix sum upside 
    //now longest sub array
    unordered_map<int,int>mpp;
    int sum=0;
    int k=5;
    int length=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];

        int reminder=sum-k;
        if(mpp.find(reminder)!=mpp.end()){
            auto it=mpp.find(reminder);//
            // cout<<it->first<<"INDEX IS "<<it->second<<endl;
            int templength =abs (it->second-(i));
            // cout<<templength<<endl;
            length=max(length,templength);
             
        }
        else{
             mpp[sum]=i;
        }
        cout<<"--"<<i<<"--"<<endl;
       
    }
    cout<<length<<endl;
    

    
    
    return 0;
}