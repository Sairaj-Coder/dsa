#include<bits/stdc++.h>
using namespace std;

void basichashing(int arr[],int n){
    int hash[100]={0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]=hash[arr[i]]+1;
    }
 
    int x;
    cout<<"Enter number to check the occurance"<<endl;
    cin>>x;
    cout<<hash[x]<<" "<<endl;

}
int main(){
    int n;
    cout<<"Enter array size"<<endl;
    cin>>n;
    int arr[n]={0};
    for (int i = 0; i < n; i++)
    {  
        cin>>arr[i];
    }
    basichashing(arr, n);

       
    return 0;
}