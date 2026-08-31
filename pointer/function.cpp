#include<bits/stdc++.h>
using namespace std;
//pass by value
int value(int a){
    a=20;
    cout<<a<<","<<endl;
    return a;
}
//pass by refernce 1)pointer


void point(int *a){
    *a=0;
    
    cout<<a<<":::This is reference address"<<endl;

}

//2)refernce variable;

void refer(int & a){
    a=100;

}





int main(){
    int a=10;
    value(a);//this function will not change the value of a;
    
    point(&a);//value is changed
    
    refer(a);//now the value is changed basically here we are creating different name for same
    //address

    cout<<a<<endl;
    int &b=a;//both and be are refering to same object;

    //now changes in b will be changes in a

    b=75;

    cout<<a<<endl;


    return 0;
}