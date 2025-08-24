#include<bits/stdc++.h>
using namespace std;
//sum of first n number i.e=>n=3
//3+2+1;
//parameter by me
//we can declare sum as global variable then it is not neccessary to pass value inside
void sumbmission(int i, int n,int sum){

    
    if (i>n)
    {
        cout<<"yet done: "<<sum<<endl;
        return;
    }
    sum+=i;
    cout<<i<<endl;
    sumbmission(i+1,n,sum);
    
}
int main(){
    int n;
    int i=1;
    int sum=0;
    cout<<"enter number"<<endl;
    cin>>n;
    sumbmission(i,n,sum);
    cout<<sum<<" this is outside"<<endl;
    return 0;
}