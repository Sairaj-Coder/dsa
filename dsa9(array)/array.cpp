#include<bits/stdc++.h>
using namespace std;
//global array has size 10^7 and it store 0 as garbage value
int arra[5];
int main(){
    //basically array is data struture of similar data type example
    //ex=integer
    int arraa[5];
    //inside main funtion max size 10^6
    //loop through
    for (int i = 0; i <5 ; i++)
    {
        cout<<"local="<<arra[i]<<" global="<<arraa[i]<<endl;
    }
    //note instead of 5 we can declare array size example
    int n=5;
    for (int i = 0; i < n; i++)
    {
        cout<<arra[i]<<endl;//here we have kept n smaller because array has index
        //index=arraysize-1;as it start from 0
    }
    
    
    return 0;
}