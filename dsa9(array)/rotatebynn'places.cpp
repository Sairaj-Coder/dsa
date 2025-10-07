#include<bits/stdc++.h>
using namespace std;
void rotate_n_places(int arr[],int n,int k){//optimal solution is remaining
    k=k%n;
    int temp[k];//time complexcity o(d)+o(n-d)+o(d)
    //space complexcity
    for (int i = 0; i < k; i++)
    {
        temp[i]=arr[i];
    }
    

    for (int i = k; i <n ; i++)
    {   
        arr[i-k]=arr[i];
       
    }
    int j=0;
    for (int i = n-k; i < n ; i++)
    {
        arr[i]=temp[j];//temp[i-(n-d)]
        j++;
    }
   
}
void optimal_sol(int arr[],int n,int k){
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
    reverse(arr,arr+n);//reverse function code is important

}
int main(){
    int n;
    cout<<"Enter size of an array=";
    cin>>n;
    cout<<"Enter to rotate the array number=";
    int k;
    cin>>k;
    int arra[n]; 
    
    
    for (auto i = 0; i < n; i++)
    {
        cout<<"Array"<<i+1<<"=";
        cin>>arra[i];
    }
    cout<<"Size="<<k<<endl<<"=====";
    //rotate_n_places(arra,n,k);
    optimal_sol(arra,n,k);
    for (int i=0;i<n;i++)
    {
        cout<<arra[i]<<",";
    }
    
    
    
    
    return 0;
}