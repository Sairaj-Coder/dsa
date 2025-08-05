#include<bits/stdc++.h>
using namespace std;
//functions are set of codes which performs something for you
//functions are used to modularise code 
//function are used to increase readibility
//functions are used to use same code multiple times different function are
//void-->which does not return any value (✔)
//return
//parametrised
//non parameterised
int sum(int num1,int num2){
    int num3=num1+num2;
    cout<<num3<<endl;//now here it has directly printed  
    return num3;//but this has stored the value for the fututre use pr without return it will throw garbage valuue
}
int max(int num1,int num2){
    if (num1>=num2) return num1;//in case of single line there is no need of parathesis
    else return num2;
}//note in case of wrong value it throws garbage value
int main(){
    int num1,num2;
    cout<<"Enter num1 and num2"<<endl;
    cin>>num1>>num2;
    sum(num1,num2);//11
    int retu=sum(num1,num2);//11
    cout<<retu<<endl;//return value printer
    int gar=max(num1,num2);
    cout<<gar<<endl;
    return 0;

    
}
// we can also perform same task using void function there is no extra difference
//note except void function we have to write return function otherwise it will throw an error
