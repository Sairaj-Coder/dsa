#include<bits/stdc++.h>
using namespace std;
//printing 1 to n from back track or using reverse recursion
void num2(int num,int i){
    if (num<i)
    {   cout<<"finish"<<endl;
        return;
    }
    num2(num-1, i);
    cout<<num<<endl;
    
}
//printing 

void num(int i1,int n1){
    if (i1>n1) {
        cout<<"working"<<endl;
        return;
    }
    num(i1+1,n1);
    cout<<i1<<endl;
}
int main(){
    int i=1;
    int n;
    cout<<"Enter number:"<<endl;
    cin>>n;
    //num(i,n);
    num2(n,i);
    return 0;
}