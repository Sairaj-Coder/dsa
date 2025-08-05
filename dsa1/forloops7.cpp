#include<bits/stdc++.h>
using namespace std;
int main(){
    
    for (int i = 0; i<=10; i=i+1)
    {
        cout<<"Hello sir"<<endl;
        //now here value of i is only inside this scope 
    }
        
    //anoher example
    int i;
    //for(intialization;condition;increament/decrement=depends on us)
    for ( i = 1; i<10; i++)
    {
        cout<<"welcome boss"<<endl;
    }
    cout<<i<<endl;//now here i becames 10 therefore loop breaks its simple like loop of python
    
    //reverse looping
    for(i=10;i>1;i--){
        cout<<i<<endl;
    }
    cout<<i<<endl;//now here last value of i is 1
    //note we can write nested for loop or we can write any condition inside for loop
    
    return 0;
}