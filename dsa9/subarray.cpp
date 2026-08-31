#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=10;
    int arr[n]={1,2,3,1,1,1,1,4,2,3};
    int maxSum=3;
    int x=0;
    int y=0;
    for (int i = 0; i < n; i++)
    {
        int sum=0;
        for (int j = i; j < n; j++)
        {
            if(sum==maxSum && j-i==maxSum){
                x=i;
                y=j;    
                break;
            }
            sum+=arr[j];
        }
         if(sum==maxSum ){
                // x=i;
                // y=j;    
                break;
            }
    }
    cout<<x<<" "<<y<<" "<<y-x<<endl;
    for (int i = x; i < y; i++)
    {
        cout<<arr[i]<<",";
    }
    
    return 0;
}