#include<bits/stdc++.h>
using namespace std;

void concat(int arr[],int i,int n,int newarrr[],int x){
    if(i==(n-1)){
        newarrr[i]=arr[i];
        newarrr[x-1]=arr[i];
        return;
    }
    newarrr[i]=arr[i];
    newarrr[n+i]=arr[i];
    concat(arr,i+1,n,newarrr,x);
}




int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int x=2*n;
    int i=0;
    int newarr[x];    
    concat(arr ,i, n, newarr, x);
    for (int i = 0; i <x; i++)
    {
        cout<<newarr[i]<<",";
    }
   

    return 0;
}