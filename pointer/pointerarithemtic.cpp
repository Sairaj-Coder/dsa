#include<bits/stdc++.h>
using namespace std;

void arra(int * arr,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<*(arr+i)<<":"<<","<<(arr+i)<<",";
    }
    

}








int main(){
    //pointer arithematic ptr++ it will not increment by 1 but by datatype if int 4bytes
    int ptr=0;
    int * add=&ptr;//now output will be 0
    
    cout<<add<<endl;
    cout<<++add<<endl;
   
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    arra(arr,size);


    cout<<*arr<<endl;
    
    int * addr=arr;

    cout<<addr++<<endl;
    cout<<*(addr++)<<endl;
    
    return 0;
}