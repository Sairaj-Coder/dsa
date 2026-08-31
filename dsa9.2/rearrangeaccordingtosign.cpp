//both solution are important 
//optimal is in notebook only valid for fixed size
#include<bits/stdc++.h>
using namespace std;
void mysol(){
        int size=6;
    int arr[size]={3,1,-2,-5,2,-4};
    //bruteforce by hashing
    int posi[size/2]={0};
    int neg[size/2]={0};
    int p=0;
    int n=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>0){
            posi[p]=arr[i];
            p++;
        }
        else{
            neg[n]=arr[i];
            n++;
        }
    }
    p=0;
    n=0;
    for (int i = 0; i < size; i++)
    {
        if(i%2==0){
            arr[i]=posi[p];//for ever [2*i]
            p++;
        }
        else{
            arr[i]=neg[n];//for odd [2*i+1]
            n++;
        }
    }
    for(auto it:arr){
        cout<<it<<" ,";
    }
}

//
int main(){
    int size=6;
    int arr[size]={1,2,-4,5,-3,6};
    //my solution for variable size    

    int positive=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>=0){
            positive++;
        }
    }
    int negative = abs(size-positive);
    int mini=min(negative,positive);
    
    int arr2[positive];
    int arr3[negative];
    int n=0;//negative
    int p=0;//positive
    for (int i = 0; i < size; i++)
    {
        if (arr[i]<0){
            arr3[n]=arr[i];
            n++;
        }
        else{
            arr2[p]=arr[i];
            p++;
        }
        
    }

    n=0;
    p=0;
    for (int i = 0; i < (mini+mini); i++)
    {
        if(i%2==0){
        arr[i]=arr2[p];
        p++;
        }
        else{
            arr[i]=arr3[n];
            n++;

        }
    }   
    int j=0;
   
    for (int i = mini+mini; i < size; i++)
    {
        if(positive>negative){//a2=positive
            arr[i]=arr2[mini+j];
            j++;
            cout<<"---"<<arr2[i]<<endl;
        }
        else if(negative<positive){
            arr[i]=arr3[mini+j];
            j++;
        }
    }
 
    for (auto it : arr)
    {
        cout<<it<<" ,";
    }
    
    return 0;
}