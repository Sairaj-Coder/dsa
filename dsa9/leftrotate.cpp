#include<bits/stdc++.h>
using namespace std;
/*
#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int start, int end){

    while (start<=end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    
}

*/
void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
    
}

void leftrotate(int arr[],int n){
    int temp=arr[0];
    for (int i = 0; i < n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
   
}

void leftrotatebyDplace(int arr[],int n, int k){//brute force 
    k=k%n;
    int temp[k]={0};
    
    for (int i = 0; i < k; i++)
    {
        temp[i]=arr[i];
    }
    for (int i = 0; i < (n-k); i++)
    {
        arr[i]=arr[k+i];
    }
    for (int i = 0; i < k; i++)
    {
        arr[n-k+i]=temp[i];
    }
    
       
}
//optimal solution reversing array


void rotatebyd(int arr[],int n,int k){
    k=k%n;
    reverse(arr, arr + k);//use algorithm library
    reverse(arr + k,arr+n);
    reverse(arr,arr+n);

}


//right rotation -->hw

int main(){
    int n= 7;
    int arr[n]={1,2,3,4,5,6,7};
    int k=3;
    // leftrotate(arr,n);
    // leftrotatebyDplace(arr,n,k);
    rotatebyd(arr,n,k);
    cout<<endl;
    print(arr,n);

    return 0;
}