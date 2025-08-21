#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter n1 and n2"<<endl;
    cin>>a>>b;
    while (a>0 && b>0)
    {
        if (a>b)
        {
            a=a%b;
        }
        else if (b>a)
        {
            b=b%a;
        }
    }
    if (a==0)
        {
        cout<<b<<endl;
        }
    else
    {
        cout<<a<<endl;
    }
        
        
        
    
    
    return 0;
}