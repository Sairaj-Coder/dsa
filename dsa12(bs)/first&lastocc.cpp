#include<bits/stdc++.h>
using namespace std;
int lb(int arr[],int n,int target){
    int low=0;
    int high = n-1;
    int index=n;
    while (low<=high)
    {
        int mid = (low + high)/2;
        if(arr[mid]>=target){
            
            index=mid;
            high=mid-1;
        }
        else{
            low = mid+1;
        }

    }
    return index;
    

}
int ub(int arr[],int n,int target){
    int low=0;
    int high = n-1;
    int index=n-1;
    while (low<=high)
    {
        int mid = (low + high)/2;
        if(arr[mid]>target){
            index=mid;
            high=mid-1;
        }
        else{
            low = mid+1;
        }

    }
    return index;
    

}
int main()
{
    int n=6;
    int arr[n]={5,7,7,8,8,10};
    int target=8;
    int lbond = lb(arr,n,target);
    if(lbond==n || arr[lbond]!=target){
            return {-1,-1};
    }
    int sec = ub(arr,n, target);
    cout<<first<<endl<<sec<<endl;
    
    return 0;
}