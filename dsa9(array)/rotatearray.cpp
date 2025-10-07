#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=6;
    int arra[]={1,2,3,4,5,6};
    /*my way
    int temp=arra[0];
    for (int i = 0; i < n-1; i++)
    {
        arra[i]=arra[i+1];
        

        
    }
    arra[n-1]=temp;
    */
   //striver

    int temp=arra[0];
    for (auto i =1 ; i<n ; i++)
    {
        arra[i-1]=arra[i];
        
        
    }
    arra[n-1]=temp;
    //time complexcity o(1);
    //space =o(1);-->this is extra space//-->this is not 
    //but in order to solve due to array we use o(n)-->but this part of algorithm
    

    for (auto i :arra)
    {
        cout<<i<<",";
    }
    
    
    
    return 0;
}