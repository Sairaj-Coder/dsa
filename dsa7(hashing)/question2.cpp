/*
Problem Statement: Given an array of size N. Find the highest and lowest frequency element.
Pre-requisite: Hashing Theory and  Counting frequencies of array elements
Examples:
Example 1:
Input: array[] = {10,5,10,15,10,5};
Output: 10 15
Explanation: The frequency of 10 is 3, i.e. the highest and the frequency of 15 is 1 i.e. the lowest.
Example 2:
Input: array[] = {2,2,3,4,4,2};
Output: 2 3
Explanation: The frequency of 2 is 3, i.e. the highest and the frequency of 3 is 1 i.e. the lowest.*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an array"<<endl;
    cin>>n;
    long arra[n];
    for (auto i = 0; i < n; i++)
    {
        cout<<"Enter element"<<i+1<<":";
        cin>>arra[i];
    }
    map<int,int>mpp;
    for (auto i = 0; i < n; i++)
    {
        mpp[arra[i]]+=1;
    }
  

        
    
   
   
    
    

    
    
    return 0;
}