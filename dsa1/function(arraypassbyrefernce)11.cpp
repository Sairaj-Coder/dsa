#include<bits/stdc++.h>
using namespace std;
void arr(int arra[],int size){//this function has take size as input also standard way
    arra[0]+=100;
    cout<<"The value inside function is:"<<arra[0]<<endl;

}
void array_practice(int array1[]){//this works without size
    array1[0]+=10;
    cout<<"This is done without passing size value"<<array1[0]<<endl;
}
int main(){
    int n=5;
    int arra[n];
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter elemnt:"<<(i+1)<<endl;
        cin>>arra[i];
    }
    arr( arra, n);//here we have passed the value of array and its size also
    //printing elements of array
    for (int i = 0; i < 5; i++)
    {
        cout<<"The elemnts are:"<<arra[i]<<endl;
    }
    //note in case of array we have to different way to pass it
    
    //more example to understand and pass value but pasiing size is standaard way 
    int array1[4]={
        5,2,3,4
    };
    array_practice(array1);//here we didnot pass the size of new array
    cout<<array1[0]<<"This is expected output withous passing size"<<endl;
    return 0;
}