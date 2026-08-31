#include<bits/stdc++.h>
using namespace std;
void mixing(int arr[],int low,int mid,int high){    
    vector<int>temp;
    int left=low;//1
    //mid=2
    int right=mid+1;//3
    //high=4;
    while (left<=mid && right<=high)
    {
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            cout<<"Visit to left="<<arr[left]<<" "<<endl;
            left++;
        }
        
        else{
            temp.push_back(arr[right]);
             cout<<"Visit to right="<<arr[right]<<" "<<endl;
            right++;

        }

    }
    while (left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    
    
    
    for (int i = low; i <= high; i++)
    {
        arr[i]=temp[i-low];
    }
    

}
void merge(int arr[],int low,int high){
    if(low==high){
        return;
    }
    int mid=(low+high)/2;
    merge(arr,low,mid);
    merge(arr,mid+1,high);
    mixing(arr,low,mid,high);


}
void merging(int arr[],int n){
    merge(arr,0,n-1);
}
int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};

    merging(arr,n);

    // for(auto it:arr){
    //     cout<<it<<" ";

    // }
    return 0;
}