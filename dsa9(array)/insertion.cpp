#include<bits/stdc++.h>
using namespace std;
void insertion_element(int arr[],int n){
    int ele;
    
    cout<<"Enter element:"<<endl;
    cin>>ele;
    int loc;
    cout<<"Enter location:"<<endl;
    cin>>loc;
    for (int i =n-1; i >= loc; i++)
    {
        arr[i+1]=arr[i];
    }
    arr[loc]=ele;
    n++;
    for(auto i=0;i<n;i++){
        cout<<arr[i]<<endl;

    } 

    

}
int main(){
    int n;
    cout<<"enter size of an array:"<<endl;
    cin>>n;
    int arr[n];
    
   
    for (int i = 0; i < n; i++)
    {
        cout<<"Enetr element"<<i+1<<":";
        cin>>arr[i];
    }
    insertion_element(arr,n);
    
    
    return 0;
}