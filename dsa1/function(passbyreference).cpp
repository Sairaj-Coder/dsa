#include<bits/stdc++.h>
using namespace std;
//pass by reference is process where original value is change ( by this '&') by passing it address 
void namechange(string &a,int &b){
    a[0]='s';
    b=17;
    //it change the value directly no need of opy

}
int main(){
    string a="Sairaj";
    int b=15;
    cout<<a<<b<<endl;
    namechange(a,b);
    cout<<a<<endl<<b<<endl;
    return 0;
}
//last 18 minutes are still remaining