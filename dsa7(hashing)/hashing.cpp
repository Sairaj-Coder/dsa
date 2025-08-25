#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;//size of array
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arra [n];//empty array to take input 
    //taking input of empty array
    for (int i = 0; i <n; i++)
    {   
        cout<<"Enter element"<<i+1<<"=";
        cin>>arra[i];
        
    }
    //checking elements is enter or not 
    //optional
    for (auto i :arra)
    {
        cout<<i<<" :Enter element is"<<endl;
    }
    //precompute
    //size can be in millions but for leaning purpose we are keeping small
    int hash[100]={0};//here n=10 must be different in case of 11 onward we will not able to do calculation
    for (int i = 0; i < n; i++)
    {
        hash[arra[i]]=hash[arra[i]]+1;
    }
    //fetching 
    //let see how many time a element is occured
    
    while (true)
    {
        int number;
        cout<<"Enter number"<<endl;
        cin>>number;
        cout<<hash[number]<<","<<endl;    
        
    }
    

    

    
    
    
    return 0;
}