#include<iostream>
using namespace std;
//write a program that takes a input  of age
//and print if they are adult
int main(){
    int a;
    cout<<"Enter age"<<endl;
    cin>>a;
    if (a>18)
    {
        cout<<"Your are adult"<<endl;
    }
    else if (a==18)
    {
        cout<<"you are becaming adult"<<endl;
    }
    else{
        cout<<"You are not ready"<<endl;
    }//it is not compulsory to have else everytime
    
    


}