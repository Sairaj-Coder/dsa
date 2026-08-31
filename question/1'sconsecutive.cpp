#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int arr[6]={1,0,1,1,0,1};
    int x=0;//repeted
    int y=0;//recent 1
    for (int i = 0; i < 6; i++)
    {
        if(arr[i]!=1){
            if(x<y){
                x=y;
            }
            y=0;
        }
        
        else if(arr[i]==1){
            y++;
        }
        if(x<y){
            x=y;
        }
    }
    cout<<"The value of y:"<<y<<"The value of x:"<<x<<endl;
    
}