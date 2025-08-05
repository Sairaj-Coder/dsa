#include<bits/stdc++.h>
using namespace std;
//functions are set of codes which performs something for you
//functions are used to modularise code 
//function are used to increase readibility
//functions are used to use same code multiple times different function are
//void-->which does not return any value 
//return
//parametrised
//non parameterised

void jarvis(){//non parametrised
    cout<<"Hello sir my name is Jarvis"<<endl<<"This is void function"<<endl;
}
void myname(string name){//parameterised
    cout<<"Your name is "<<name<<endl;
    cout<<"This is void function with parametrised"<<endl;
}
int main(){
    jarvis();//void function without parameterised
    string name;//void function with parameterised
    cout<<"Enter name"<<endl;
    cin>>name;
    myname(name);
    
    return 0;
}