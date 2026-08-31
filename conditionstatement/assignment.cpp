/*
Question2:Write a C++ program that takes a year from the user
and print whether that year is a leap year or not

*/
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter year"<<endl;
    cin>>year;
    if (year%4==0)
    {
        cout<<"leap year"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    
    return 0;
}