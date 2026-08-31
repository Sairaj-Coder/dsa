#include<bits/stdc++.h>
using namespace std;
int main(){
int x=200;
int y=50;
int z=100;
    if(x>y  && y>z){
        cout<<"Wrong"<<endl;
    }
    if(z>y && z<x){
        cout<<true<<endl;
    }
    if((y+200)<x && (y+150)<z){
        cout<<"false"<<endl;
    }
    return;
}