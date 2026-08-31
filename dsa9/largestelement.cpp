#include<bits/stdc++.h>
using namespace std;
//largest element

void largest(int arr[],int n){
 //sort the array print last 
 //we can use merge sort and print last element   
}

void largest2(int arr[],int n){
    int max = arr[0];
    for (int  i = 1; i < n; i++)
    {
        if(max < arr[i]){
            max=arr[i];
        }
    }
    cout<<max<<endl;
    
}


int main(){
    int maxsum=INT_MIN;
    int n=6;
    int arr[n]={1,12,3,4,5,100};
    largest2(arr, n);

    return 0;
}