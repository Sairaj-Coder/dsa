#include<bits/stdc++.h>
using namespace std;
int main(){
    int length=6;
    int arr[length]={1,5,4,6,2,3};
    for (int i = 0; i < (length/2); i++)
    {
        swap(arr[i],arr[length-1-i]);
    }
    for (auto i : arr)
    {
        cout<<i<<",";  
    }
    
    
}