#include<bits/stdc++.h>
using namespace std;
void zerostoend(int arr[],int n){
    int i = 0;
    int j= n-1;
    while (i<=j)
    {
        if (arr[i]==0 && arr[j]!=0)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if (arr[j]==0)
        {
            j--;
        }
        else if(arr[i]!=0){
            i++;
        }
        
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ,";
    }
    
    
}



int main(){
    int n=10;
    int arr[n]={1,0,2,3,2,0,0,4,5,1};
    zerostoend(arr,n);
    // for(auto it : arr){
    //     cout<<it<<",";
    // }
    cout<<"Done";
    return 0;
}