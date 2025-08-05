#include<bits/stdc++.h>
using namespace std;
int main(){
    string a="Sairaj";
    cout<<a<<endl;
    cout<<a[0]<<endl;//now here we can access all elements with the help indicess
    int len=a.size();//here we got length with the help .size() funtion now lenght starts from one
    cout<<"length is"<<endl<<len<<endl;
    //now in case we have to access last element then we can len-1
    cout<<a[len-1]<<endl; 
    //now we can change any character by it indices
    a[0]='s';//note string is addition of character so during change use single quotes
    cout<<a<<endl;
    a[len-1]='J';
    cout<<a<<endl;
    return 0;
}