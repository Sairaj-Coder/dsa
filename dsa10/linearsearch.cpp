#include<bits/stdc++.h>
using namespace std;
//linear search =linear search is also known as sequential search or serial search
//as it search each element of an array
int linear_search(int arr[],int size,int key){
    for (int i = 0; i < size ; i++)
    {
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
    

}



int main(){
    int size;
    cout<<"Enter size of array";
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key";
    cin>>key;
    cout<<linear_search(arr,size,key);
    
    return 0;

}