//move all zero to end of arr
#include<bits/stdc++.h>
using namespace std;
void elementsmove(int arr[],int n,int k ){
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
            j++;
        }
        
    }
    int temp[j];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
            temp[j]=arr[i];

        }
        
    }
    
    

}
int main(){
    int n;
    cin>>n;
    int arr[n]; 
    for (int i = 0; i <n ; i++)
    {
        cin>>arr[i];
    }
    int k=0;
    elementsmove(arr,n,k);
    
    return 0;
}