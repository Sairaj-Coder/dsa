#include<bits/stdc++.h>
using namespace std;
vector<int> unionarr(int arr[],int arr2[],int n, int m){//-->this does not give us unique element it combines two array unquie li
    int i=0;
    int j=1;
    vector<int> uni;
    while (j<=n)
    {
        if (arr[i]!=arr[j] )
        {
            // cout<<arr[i]<<",";
            uni.push_back(arr[i]);
            i=j;
            j++;
        }
        else{
            j++;
        }
                        
    }
    cout<<endl;
    i=0;
    j=1;
    while (j<=m)
    {
        if (arr2[i]!=arr2[j])
        {
            uni.push_back(arr2[i]);
            
            i=j;
            j++;
        }
        else{
            j++;
        }
                        
    }
     cout<<endl;

    // cout<<uni.size()<<"This is size";
    

    

    return uni;
}

//brute force-->we are going to use set as it store data in sorted order and unique elements only
vector<int> brute(int arr1[],int arr2[2],int n, int m){
    set<int> st;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        st.insert(arr2[i]);
    }
    for(auto it: st){
        vec.push_back(it);
    }
    return vec;
}
//optimal approch 

vector<int> optimal(int arr1[],int arr2[],int n, int m){

    int i=0;
    int j=0;
    vector<int> uni;
    while (i<n && j<m)
    {
        if(arr1[i]<=arr2[j]){
            if(uni.size()==0 ||  uni.back()!=arr1[i] ){
                uni.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(uni.size()==0 ||  uni.back()!=arr2[j] ){
                uni.push_back(arr2[j]);
            }
            j++;

        }

    }
    while (j<m)
    {
         if(uni.size()==0 ||  uni.back()!=arr2[j] ){
                uni.push_back(arr2[j]);
            }
            j++;

    }
    while (i<n)
    {
            if(uni.size()==0 ||  uni.back()!=arr1[i] ){
            uni.push_back(arr1[i]);
            }
            i++;


    }
    return uni;
}

int main(){
    int n=6;
    int m=6;
    int arr1[n]={1,1,2,3,4,5};
    int arr2[m]={2,3,4,4,5,6};
    // vector<int> uni = unionarr(arr1, arr2, n,  m);
//    vector<int> uni=brute(arr1, arr2,n,  m);
   vector<int> uni= optimal(arr1,arr2,n, m);
    
    for(auto it: uni){
        cout<<it<<",";
    }
    return 0;
}