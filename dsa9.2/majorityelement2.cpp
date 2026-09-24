#include<bits/stdc++.h>
using namespace std;
int main (){
    int n=8;
    int arr[n]={1,1,1,3,3,2,2,2};
    int i=0;
    map<int,int>temp;
    int more = n/3;
    int count=0;
    while (i<n)
    {   
        temp[arr[i]]+=1;
        // auto it= temp.find(arr[i]);
        if(temp[arr[i]]>more){
           cout<<arr[i]<<endl;
        }
        if(count>2){
            break;
        }
        i++;
    }
    
    return 0;
}