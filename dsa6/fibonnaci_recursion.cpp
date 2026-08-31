#include<bits/stdc++.h>
using namespace std;
int fibonnaci_recursion(int n){
    if (n<=1)
    {   return n;
    }
    int last=fibonnaci_recursion(n-1);
    int slast=fibonnaci_recursion(n-2);
    return (last+slast);
    

}
int main(){
    while (true)
    {
        int n;
        cout<<"Enter the number"<<endl;
        cin>>n;
        cout<<fibonnaci_recursion(n)<<endl;
        
    }
    
    
    return 0;
}