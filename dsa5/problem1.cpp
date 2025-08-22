#include<bits/stdc++.h>
using namespace std;
//problem 1=print name 5 times with the help of recursion
int cnt=0;
void nameprint(){
    if (cnt==5) return;
    cnt++;
    cout<<"Name"<<endl;
    nameprint();

}
int main(){
    nameprint();
    return 0 ;
}