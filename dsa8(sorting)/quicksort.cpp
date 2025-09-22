#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&arra,int low,int high){
    int pivot = arra[low];
    int i = low;
    int j = high;
    while (i<j)
    {
        while (arra[i]<=pivot && i<high)
        {
            i++;
        }
        while (arra[j]>pivot && j> low )
        {
            j--;
        }
        if(i<j){
            swap(arra[i],arra[j]);
        }
        
        
    }
    swap(arra[low],arra[j]);
    return j;
     
}
void qs(vector<int>&arr,int low,int high){
    if (low<high)
    {
        int pIndex = partition(arr,low,high);
        qs(arr,low,pIndex-1);
        qs(arr,pIndex+1,high);

    }
    

}
int main(){
    int n;
    cout<<"Enter size of an array"<<endl;
    cin>>n;
    vector<int>arra;
    for (int i = 0; i < n; i++)
    {   
        int x;
        cout<<"Enter element"<<i+1<<endl;
        cin>>x;
        arra.push_back(x);
    }
    
    qs(arra,0,arra.size()-1);
    for (auto i :arra)
    {
        cout<<i<<" ";
    }
    return 0;
    

}