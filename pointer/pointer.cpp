#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=10;

    int * b = &a;
    cout<<b<<endl;

    //now if we want to store the address of address

    int ** c = &b;

    //now we have stored the adress of b

    cout<<c<<"=="<<&b<<"\n";


    //dereferencing the operator
    //i.e=>geting value

    cout<<*c<<endl;//geting value of address at c
    cout<<**c<<endl;//geting value of address at c of c i.e=10


    //even we can modify the value

    **c=20;

    cout<<a<<endl;


    return 0;
}