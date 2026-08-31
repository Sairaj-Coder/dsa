#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&arra,int low,int high){
    int pivot=arra[low];
    int i=low;
    int j=high;
    while (i<j)
    {
        while (arra[i]<=pivot && i<high)
        {
            i++;
        }
        while (arra[j]>pivot && (j>low))
        {
            j--;
        }
        if(i<j){
            int temp=arra[j];
            arra[j]=arra[i];
            arra[i]=temp;
            //swap(arra[i],arra[j]);
        }  
    }
    int temp=arra[j];
    arra[j]=arra[low];
    arra[low]=temp;
    //swap(arra[low],arra[j]);
    return j; 
}
void qs(vector<int>&arra,int low,int high){
    if(low < high)
    {
        int partition_index =partition(arra,low,high);
        qs(arra,low,partition_index-1);
        qs(arra,partition_index+1,high);
    }
}

int main(){
    vector<int>arra={3,4,1,2,5};
    int n=5;
    //cout<<"Enter size of:"<<endl;
    //cin>>n;
    // for (int i = 0 ; i < n; i++)
    // {   
    //     int x;
    //     cout<<"Enter element"<<i+1<<endl;
    //     cin>>x;
    //     arra.push_back(x);
    // }
    qs(arra,0,n-1);
    for(auto x:arra){
        cout<<x<<",";
    }
    

    return 0;
}