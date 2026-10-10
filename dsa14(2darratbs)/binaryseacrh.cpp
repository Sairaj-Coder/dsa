#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int n , int target){
    int low=0;
    int high=n-1;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==target){
            return arr[mid];
        }
        if(target<arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        
    }
    return -1;
}
int main(){
    int n=4;
    int m=3;
    int arr[m][n] = {
    {3,4,7,9},
    {12,13,16,18},
    {20,21,23,29},
    };
    int target=19;
    int low=0;
    int high=m-1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i][0]<= target && arr[i][n-1] >= target){
            cout<<binarysearch(arr[i],n,target);
        }
    }
    
    return 0;
}
/*
bool binarysearch(vector<int>& arr, int target){
    int low=0;
    int high=arr.size()-1;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==target){
            return true;
        }
        if(target<arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        
    }
    return false;
}

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
    int n= arr.size();
    int low=0;
    int high=n-1;
    int ec=arr[0].size()-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid][0]<= target && arr[mid][ec] >= target){
            return binarysearch(arr[mid],target);
        }
        else if(target < arr[mid][0]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return false;
        
    }
};



*/