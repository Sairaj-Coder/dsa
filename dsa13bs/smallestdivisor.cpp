#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=4;
    int arr[n]={1,2,5,9};
    // int divisor=0;
    int mid=4;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+ceil(double(arr[i])/double(mid));
        // cout<<ceil(arr[i]/mid)<<endl;
    }
    cout<<sum;
    return 0;
}