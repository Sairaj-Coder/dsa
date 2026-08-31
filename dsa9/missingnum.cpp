#include<bits/stdc++.h>
using namespace std;

int missing(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        // if(arr[n-1]-arr[n-2]!=arr[0])return arr[n-1]-arr[n-2];
         if (arr[i]+1 != arr[i+1])
        {
            return arr[i]+1; 
        }
        else if(arr[n-2]-arr[n-3]!=arr[0] ){
            // cout<<arr[n-1]<<endl;
            // cout<<arr[n-2]<<endl;
            // cout<<(arr[n-1]-arr[n-2])<<endl;
        return arr[n-2]-arr[n-3];
        }

        
    }
    return -1;
}
int optimalsol(int arr[],int n){
    int sum=0;
    for (int i = 0; i <= n; i++)
    {
        sum+=i;
    }
    cout<<sum<<endl;
    int sum2=0;
    for (int i = 0; i < n; i++)
    {
        sum2+=arr[i];
    }
    int missingnum=sum-sum2;
    return missingnum;
    
    
}
//better visted array

int main(){
    int n=5;
    int arr[5]={1,2,4,5};
    // int num=missing(arr,n);
    // cout<<num;
    int num=optimalsol(arr,n);
    cout<<num;
    return 0;

}