#include<bits/stdc++.h>
using namespace std;

//int reversing array with extra space
void reverse(int arr[],int n){
    int arr2[n]={0};
    for (int i = 0; i < n; i++)
    {
        arr2[i]=arr[n-i-1];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i]=arr2[i];
    }

}

//without extra space
void reverse2(int arr[],int n){
    
    for (int i = 0; i < n/2; i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }

}



int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    reverse2(arr,n);
    reverse(arr,n);
    for(auto it: arr){
        cout<<it<<" ";
    }
}