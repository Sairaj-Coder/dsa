#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int low,int high,int key){//optimal soln
    if(low<=high){
        int middle=low+(high-low)/2;
    
        if (arr[middle]==key){
            return middle;
        }
        if (arr[middle] > key){
            return binary_search(arr,low ,middle-1,key);

        }
        
        
        return binary_search(arr,middle+1,high,key);
        
    }
    return -1;
}
int main(){
    int high;
    cout<<"Enter size="<<endl;
    cin>>high;
    int low=0;
    int arr[high];
    for (auto i = 0; i < high; i++)
    {
        cout<<"enter element"<<i+1<<"=";
        cin>>arr[i];
    }
    int k;
    cout<<"Enter key to find=";
    cin>>k;
    high-=1;
    cout<<binary_search(arr,low,high,k);

    
    return 0;
}