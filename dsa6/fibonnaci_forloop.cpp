#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1=0;
    int x2=1;
    int next_term=0;
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<x1<<","<<x2<<",";
    
    for (int i = 3; i < n; i++)
    {
        next_term=x1+x2;
        x1=x2;
        x2=next_term;
        cout<<next_term<<",";
    }
    
    return 0;
}