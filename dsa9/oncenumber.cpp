#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=7;
    int arr[n]={1,2,1,41,2,43,41};
    // int xorr=0;
    int xorrr=0;
    for (int i = 0; i <n ; i++)
    {
        xorrr=xorrr^arr[i];//1^1=0 and 1^0=1
        cout<<xorrr<<",";//The mathematical property of XOR says you are allowed to rearrange this expression:
    }

    cout<<"\n"<<xorrr<<","<<endl;
    // cout << ((0 ^ 5) ^ (4 ^ 0));

    

    return 0;
}