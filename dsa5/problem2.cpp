#include<bits/stdc++.h>
using namespace std;
//print linearly from 1 to n
int cnt=1;

void linearprinting(int num){
    if (cnt==num){
        cout<<cnt<<endl; 
        return ;}
    cout<<cnt<<endl;
    cnt++;
    
    linearprinting(num);
}
int main(){
    int n;
    cout<<"Enter number to print"<<endl;
    cin>>n;

    linearprinting(n);
    return 0;
}