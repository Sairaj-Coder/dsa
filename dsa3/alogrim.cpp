#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int arra[11]={4,5,6,8,9,7,8,9,8,6,4};
    //sorting with the help of function
    sort(arra,arra+11);

    for (auto i:arra )
    {
        cout<<i<<",";
    }
    cout<<"Array is sorted"<<endl;
    //in case we want to sort particular part of array
    //sort(arra+5,array+7);
    
    //in case i want to sort it in descending order 
    sort(arra,arra+11, greater<int>());
    for (auto i:arra )
    {
        cout<<i<<",";
    }
    cout<<"Sorted in descending order"<<endl;

    



    //sorting in vector
    vector<int>v={7,8,9,4,3,2,1};
    sort(v.begin(),v.end());
    for (auto i :v)
    {
        cout<<i<<",";

    }
    cout<<"vector is sorted"<<endl;
    

    
    return 0;
}