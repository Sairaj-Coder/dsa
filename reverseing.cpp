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

int main(){
    //manually return function
    int n=5;
    int arr[n]={1,2,3,4,5};
    int start =3;
    
    reverse(arr, start , n-1);
    for (auto  it : arr)
    {
        cout<<it<<" ,";
    }
    


}