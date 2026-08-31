#include<bits/stdc++.h>
using namespace std;

void optimal(int arr[], int n){
    
    int firstlargest = INT_MIN;
    int secondlargest = INT_MIN;

    for (int i = 0; i < n; i++)//optimal solution
    {
        if (firstlargest<arr[i]){
            firstlargest=arr[i];
        }
        else if(arr[i]<firstlargest && arr[i]>secondlargest ){

            secondlargest=arr[i];
        }
    }
    cout<<secondlargest<<endl;
}

void better(int arr[],int n){

    int largest=arr[0];

    for (int i = 1; i < n; i++)
    {
        if(largest<arr[i]){
            largest=arr[i];
        }
    }
    // int secondlargest = INT_MIN; //for second minimum go for int_max
    int secondlargest = INT_MIN; //for second minimum go for int_max
        for (int i = 1; i < n; i++)
    {
        if(secondlargest<arr[i] && arr[i]!=largest){
            secondlargest=arr[i];
        }
    }
    cout<<secondlargest;

}


//
void brute(){
    //sort the array and 
    //assign value 
    //and use reverse loop
    /*
    for(i=n-2 ; i>=0 ;i--){
    if(arr[i]!=largest){
        cout<<arr[i]<<endl;
        break;
    }
    }
    */

}


int main(){
    int n = 6;
    int arr[n]= {1,-2,-4,-7,-7,-8};
    // optimal(arr,n);
    // better(arr,n);
    //hw find first and second smallest
    
}