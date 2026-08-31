#include<bits/stdc++.h>
using namespace std;
//remove duplicate from sorted array
void removeduplicate(int arr[], int n){ //my solution
    for (int i = 0; i < (n-1); i++)
    {
        if (arr[i]==arr[i+1])
        {
            arr[i]=0;
        }   
    }
    for(int j=0; j<(n);j++){
        cout<<arr[j]<<",";
    }
}

//brute --use set as it store unique elements

//optimal solution
int duplicate(int arr[],int n){
    int i=0;
    int j=1;
    while (j<n)
    {
        if (arr[i]!=arr[j])
        {
            arr[i+1]=arr[j];
            i++;

        }
        j++;
        
    }
    cout<<i+1<<endl;
    return i+1;
    // for(int j=0; j<(n);j++){
        // cout<<arr[j]<<",";
    // }

    

}

int main(){
    int n=8;
    int arr[n]={1,1,2,2,2,3,3,4};

    // removeduplicate(arr , n);

    duplicate(arr,n);


    return 0;
}