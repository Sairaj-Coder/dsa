#include<bits/stdc++.h>
using namespace std;
void parametrized_recursion(int n,int sum){
    if (n<1)
    {
        cout<<sum<<endl;
        return;
    }
    parametrized_recursion(n-1,sum+n);
    


}
int main(){
    int n;
    int sum=0;
    cout<<"Enter n"<<endl;
    cin>>n;
    parametrized_recursion(n,sum);
    return 0;
}