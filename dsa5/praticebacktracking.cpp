#include<bits/stdc++.h>
using namespace std;
//question 1 to 10
void num1to10(int n ,int i){
    if (i>n)
    {   cout<<"started"<<endl;
        return;
    }
    num1to10(n-1,i);//either i+1 or n-1 otherwise backtracking will not work
    cout<<n<<endl;
    

}
int main(){
    //cout<<"Enter num:"<<endl;
    int i=1;
    int n=10;
    //cin>>n;
    num1to10(n,i);
    return 0;
}